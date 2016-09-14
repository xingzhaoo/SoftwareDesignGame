note
	description: "[
		Summary description for {USS_ENTERPRISE}. Inherit from SPACE_UNIT.
		USS Enterprise, the warcraft controlled by player on a mission 
		to hunt down and destroy invading fleet of Klingon warships.
		]"
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	USS_ENTERPRISE

inherit
	SPACE_UNIT

create
	make

feature {NONE} -- Initialization

	make(a_id: INTEGER)
			-- Initialization for `Current', a new USS_E takes off.
		require
			a_id_in_range: a_id > 0 and a_id <= max_id
		local
			state_access:USS_E_STATE_ACCESS
		do
			create name.make_from_string("-E-")
			id := a_id
			torpedoes := 10
			energy := 2000
			shields := 1000
			condition := state_access.uss_e_state
					-- get singlton of USS_E_STATE
			alive := true
		ensure
			name_correct:
					create {STRING}.make_from_string("-E-") ~ name
			id_correct: id = a_id
			is_alive: alive = true
		end

feature -- USS_E Attributes
	name: STRING
	id: INTEGER	-- index of the collection where USS_E resides
	torpedoes: INTEGER
	energy: INTEGER
	shields: INTEGER
	condition: SPACE_UNIT_STATE
			-- 3 levels: GREEN, RED, DEAD
	alive: BOOLEAN

feature -- commands
	set_id(index:INTEGER)
		-- set a new id `index'
	do
		id := index
	end

	condition_check
			-- check USS_E ship condition after every activity.
			-- e.g. move, hit, attack and get_point
		require
			condution_non_void: condition /= void
		do
			condition.update (Current)
		end

	move
			-- USS_E moves to a new position, consume 50 energy
		do
			energy := energy - 50
			condition_check
		ensure
			energy_correct: energy = old energy - 50
		end

	crash
			-- USS_E crashes with a unit, lose 500 shield
		do
			if shields < 500 then
				shields := 0
			else
				shields := shields - 500
			end
			condition_check
		ensure
			enough_shields: shields = old shields - 500
					implies old shields >= 500
			less_shields: shields = 0 implies old shields <= 500
		end

	attack
			-- USS_E launches a torpedo
		require
			torpedo_not_out: torpedoes > 0
		do
			torpedoes := torpedoes - 1
			condition_check
		ensure
			torpedoes = old torpedoes - 1
		end

	hit
			-- USS_E is hit by klingon war crafts,
			-- consume 100 shields
		require
			shields_valid: shields >= 0
		do
			if shields < 100 then
				shields := 0
			else
				shields := shields - 100
			end
			condition_check
		ensure
			enough_h_shields: shields = old shields - 100
					implies old shields >= 100
			less_h_shields: shields = 0 implies old shields <= 100
		end

	get_point
			-- USS_E destory a klingon war craft,
			-- gain 1 torpedo, 100 energy, 100 shields
		do
			torpedoes := torpedoes + 1
			energy := energy + 100
			shields := shields + 100
			condition_check
		ensure
			torpedoes = old torpedoes + 1
			energy = old energy + 100
			shields = old shields + 100
		end

feature -- query
	is_alive:BOOLEAN
		-- check if USS_E is alive
		do
			if condition_status /~ "DEAD" then
				Result := true
			end
		ensure
			alive_check: Result = (condition.state /~ "DEAD")
		end

	condition_status: STRING
		-- report the current condition
		do
			condition_check
			Result := condition.state
		ensure
			correct_condition: Result = condition.state
		end

invariant
	name_correct: create {STRING}.make_from_string("-E-") ~ name
	id_in_range: id > 0 and id <= max_id
	non_void_condition: condition /= void
	energy_positive: energy >= 0
	torpedoes_positive: torpedoes >= 0
	shields_positive: shields >= 0
end
