note
	description: "Summary description for {SPACE_MAIN_UNITS}. Main body that contains all UNITS for the game."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	SPACE_MAIN_UNITS

inherit
	ANY
	redefine out end

	SINGLETON
	redefine out end

create {SPACE_MAIN_UNITS_ACCESS}
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			count := 0
			count_klingons := 0
			create {ARRAYED_LIST[SPACE_UNIT]} space_units.make(game_units)
			space_units.compare_objects
			load_space_track
			load_klingons
			load_uss_e
		end

feature {NONE} -- singleton
	the_singleton:SINGLETON
			-- the unique instance of this class
		once
			Result := Current
		end

feature -- model attributes
	count: INTEGER -- total number of SPACE_UNITs
	count_klingons: INTEGER -- number of klingons warships
	space_units: LIST[SPACE_UNIT] -- list contains all SPACE_UNITS
	uss_e_id: INTEGER -- index of USS_E in `space_units' list

feature -- global constants
	mode:INTEGER = 8
			-- mode number, game has 8 X 8 quadrant
	game_units:INTEGER = 64
			-- the total game units
	max_klingons:INTEGER = 10
			-- max number of klingons

feature -- model operations
	reset
		-- Reset model state.
		do
			make
			uss_e_update
		end

	continue
		-- Start a new level game after Victory
		-- USS_E carries the same information from previous game
		local
			uss_e_t: USS_ENTERPRISE
		do
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				uss_e_t := uss_t
				reset
				space_units[uss_e_id] := uss_e_t
			else
				print("continue error!")
			end


		end

feature -- Report messages
	report:MESSAGE
		-- report message, create singleton access to the MESSAGE
		once
			create Result
		end

feature -- Game units loading commands
	load_space_track
			-- fill the list with SPACE_TRACKs
		require non_void_list: space_units /= void
		local
			st: SPACE_UNIT
			i: INTEGER
		do
			from
				i := 1 -- index of the list
				space_units.start
			until
				space_units.count = game_units
				--space_units.after
			loop
				create
					{SPACE_TRACK} st.make(i)
				space_units.extend (st)
				count := count + 1
				i := i + 1
				space_units.forth
			end
		ensure
			list_full_loaded: count = game_units
		end

	load_klingons
			-- fill the KLINGONs with random index to the list
		local
			rand: LIST[INTEGER]
			r: RAND_SEQ	-- get RANDOM number
			k: SPACE_UNIT -- klingon
			i: INTEGER -- index
		do
			create r.make
			rand := r.get_random_set(max_klingons, game_units)

			from
				rand.start
			until
				rand.after
			loop
				i := rand.item
					-- retrive index from random set

				create {KLINGON} k.make(i)
					-- initiate klingon
				space_units[i] := k
					-- replace SPACE_TRCK with KLINGON
					-- based on random index
				count_klingons := count_klingons + 1
					-- add count of klingons
				rand.forth
					-- get next random index
			end
		ensure
			klingons_load_correct: count_klingons = max_klingons
		end

	load_uss_e
			-- insert USS_E randomly into a SPACE_TRACK
		local
			uss_e:SPACE_UNIT
			i:INTEGER
			r:RANDOM
			r_num:RAND_SEQ
		do
			create r_num.make
			r := r_num.get_rnd
			from -- obtain random numbers
				r.start
			until
				r.after or i = -1
					-- end the loop once a valid index is found
			loop
				i := (r.item \\ game_units) + 1
				if
					space_units[i].name ~ " . "
						-- look for a SPACE_TRACK for replacement
				then
					create {USS_ENTERPRISE}
					uss_e.make(i) -- initiate USS_E
					space_units[i] := uss_e
						-- replace a SPACE_TRACK with USS_E
					uss_e_id := i -- stores id in the attribute
					i := -1 -- terminate the loop
				end
				r.forth
			end
		ensure
			uss_e_id_in_range: uss_e_id > 0 and uss_e_id <= game_units
		end

feature -- commands
	klingons_decrease
			-- USS_E destorys one klingons
		require
			positive_count_kling: count_klingons > 0
		do
			count_klingons := count_klingons - 1
		ensure
			count_klingons = old count_klingons - 1
		end

	uss_e_update
			-- Perform update to the USS_E condition.
		do
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				uss_t.condition_check
			end
		end

	uss_e_ammunition_call
			-- USS_E calls for more ammunition under RED state or luck point
		do
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				uss_t.get_point
			end
		end

	hit_target(invader: INTEGER)
			-- successfully destories a klingon at index `invader'
		require
			invader_in_range: invader > 0 and invader <= count
		do
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				uss_t.get_point
				uss_t.attack
				uss_t.condition_check
					-- update state
				space_units[invader] := create {SPACE_TRACK}.make(invader)
					-- replace destoryed klingon
				klingons_decrease
			end
		end

	miss_target
			-- missed taget, USS_E wastes 1 torpedo
		do
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				uss_t.attack
			end
		end

	attack(direction:STRING):STRING
			-- USS_E attacks klingon in the targated direction
		require
			a_direction_non_void: direction /= void
			a_direction_correct: direction ~ "al"
							or direction ~ "ar"
							or direction ~ "au"
							or direction ~ "ad"
		local
			sc_index: INTEGER
		do
			sc_index := uss_e_id
			create {STRING} Result.make_empty
				if
					direction ~ "al" -- attack left
				then
					from -- scan the left side of the list
					sc_index := sc_index - 1
					until
					sc_index < 1 or Result ~ report.gain_point
					loop
						if
							space_units[sc_index].name ~ " * "
								-- match klingon
						    and scan_left(uss_e_id, sc_index)
						    	-- check klingon is at left
						then
							hit_target(sc_index)
							Result := report.gain_point
						end
						sc_index := sc_index - 1
					end

				elseif
					direction ~ "ar" -- attack right
				then
					from -- scan the left side of the list
					sc_index := sc_index + 1
					until
					sc_index > count or Result ~ report.gain_point
					loop
						if
							space_units[sc_index].name ~ " * "
							and scan_right(uss_e_id, sc_index)
						then
							hit_target(sc_index)
							Result := report.gain_point
						end
						sc_index := sc_index + 1
					end

				elseif
					direction ~ "au" -- attack up
				then
					from -- scan the left side of the list
						sc_index := sc_index - 1
					until
						sc_index < 1 or Result ~ report.gain_point
					loop
						if
							space_units[sc_index].name ~ " * "
							and scan_up(uss_e_id, sc_index)
						then
							hit_target(sc_index)
							Result := report.gain_point
						end
						sc_index := sc_index - 1
					end

				elseif
					direction ~ "ad" -- attack down
				then
					from -- scan the right side of the list
					sc_index := sc_index + 1
					until
					sc_index > count or Result ~ report.gain_point
							-- limit search range and terminate flag
					loop
						if
							space_units[sc_index].name ~ " * "
							and scan_down(uss_e_id, sc_index)
						then
							hit_target(sc_index)
							Result := report.gain_point
						end
						sc_index := sc_index + 1
					end
				end

				if Result.is_empty then
					miss_target
					Result := report.miss
				end

		end

	move(direction:STRING):STRING
			-- move USS_E to the `direction' one unit position
	require
		m_direction_non_void: direction /= void
		m_direction_correct: direction ~ "l"
							or direction ~ "r"
							or direction ~ "u"
							or direction ~ "d"
	do
		create Result.make_empty
		-- swape positions first
		if
			direction ~ "l" and uss_e_id > 1
					-- move left
		then
			if
				space_units[uss_e_id - 1].name ~ " * "
					-- a klingon is at the `index'
			then
				uss_e_crash(uss_e_id - 1)
				Result := report.crash
			else
				uss_e_swape(uss_e_id - 1)
			end

		elseif
			direction ~ "r" and uss_e_id < count
					-- move right
		then
			if
				space_units[uss_e_id + 1].name ~ " * "
					-- a klingon is at the `index'
			then
				uss_e_crash(uss_e_id + 1)
				Result := report.crash
			else
				uss_e_swape(uss_e_id + 1)
			end

		elseif
			direction ~ "u" and (uss_e_id - 1) // mode > 0
					-- move up
		then
			if
				space_units[uss_e_id - mode].name ~ " * "
					-- a klingon is at the `index'
			then
				uss_e_crash(uss_e_id - mode)
				Result := report.crash
			else
				uss_e_swape(uss_e_id - mode)
			end

		elseif
			direction ~ "d" and (uss_e_id - 1) // mode < mode - 1
					-- move down
		then
			if
				space_units[uss_e_id + mode].name ~ " * "
					-- a klingon is at the `index'
			then
				uss_e_crash(uss_e_id + mode)
				Result := report.crash
			else
				uss_e_swape(uss_e_id + mode)
			end

		else
			Result := report.edge
		end

		if
			Result.is_empty
					-- validate if moved sussccfully
		then
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				uss_t.move
				Result := report.move
			else
				Result := report.uss_e_err
			end
		end
	end

	uss_e_swape(index:INTEGER)
			-- swape USS_E unit with the unit at `index'
		require
			swap_index_in_range: index > 0 and index <= count
		do
			space_units.go_i_th (uss_e_id)
			space_units.swap (index)
			space_units[index].set_id (index)
			space_units[uss_e_id].set_id (uss_e_id)
			uss_e_id := index
		ensure
			index_assigned: uss_e_id = index
			uss_e_id_assigned: space_units[uss_e_id].id = index
			uss_e_valid: space_units[uss_e_id].name ~ "-E-"
		end

	uss_e_crash(index:INTEGER)
			-- USS_E crashes into the unit at `index' and
			-- replaces the unit at `index'
		require
			clash_index_in_range: index > 0 and index <= count
		do
			space_units[index] := create {SPACE_TRACK}.make (index)
				-- unit crashed by USS_E is replaced by SPACE_TRACK
			uss_e_swape(index)
			klingons_decrease
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				uss_t.crash
					-- USS_E lost 500 shield due to crash
			end
		end

feature -- queries
	quadrant_out(n:INTEGER):STRING
			-- quadrant information in String format
			-- `n', size of the quadrant in n x n
		require n_positive: n > 0
		local
			col: INTEGER
		do
			create Result.make_from_string (" quadrant%N")
			from
				col := 1
			until
				col > space_units.count
			loop
				Result := Result + space_units[col].name
				if
					((col - 1) \\ n) = n - 1
				then
					Result := Result + "%N"
				end
				col := col + 1
			end

			Result := Result + "%N"
		end

	is_victory:BOOLEAN
			-- check if all kinglons are destoryed
		do
			if count_klingons = 0 then
				Result := true
			end
		ensure
			victory_check: Result = (count_klingons = 0)
		end

	uss_e_is_alive:BOOLEAN
			-- check if USS_E is alive
		do
			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				Result := uss_t.is_alive
			end
		end

	uss_e_state:STRING
			-- return the condition of the USS_E
			-- USS_E condition state: GREEN, RED, DEAD
		do
			create Result.make_empty

			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				Result := uss_t.condition_status
			else
				Result:= report.uss_e_err
			end
		end

	uss_e_out:STRING
			-- display USS_E status (scores) in String format
		do
			create Result.make_empty

			if
				attached {USS_ENTERPRISE} space_units[uss_e_id] as uss_t
					-- conforms to USS_ENTERPRICE from SPACE_UNIT
			then
				Result := " condition %T" + uss_t.condition_status +"%N"
				Result := Result + " torpedoes %T" + uss_t.torpedoes.out + "%N"
				Result := Result + " energy   %T" + uss_t.energy.out + "%N"
				Result := Result + " shields  %T" + uss_t.shields.out + "%N"
				Result := Result + " klingons  %T" + count_klingons.out + "%N"
			else
				Result:= report.uss_e_err
			end
		end

	out:STRING
			-- display each unit in String, each line has 8 units
		do
			create Result.make_from_string ("")
			Result := uss_e_out
			Result := Result + quadrant_out(mode)
		end

feature -- Utilities

	scan_left(host:INTEGER; target:INTEGER):BOOLEAN
			-- index `host' checks if the index `target' is on its left
			-- and in the same row returns true if the target is found.
		require
			host_positive: host > 0
			target_positive: target > 0
		do
			if
				target < host and
				get_y_axis(target, mode) = get_y_axis(host, mode)
					-- both must be in the same row
			then
				Result := true
			end
		end

	scan_right(host:INTEGER; target:INTEGER):BOOLEAN
			-- index `host' checks if the index `target' is on its right
			-- and in the same row returns true if the target is found.
		require
			host_positive: host > 0
			target_positive: target > 0
		do
			if
				target > host and
				get_y_axis(target, mode) = get_y_axis(host, mode)
					-- both must be in the same row
			then
				Result := true
			end
		end

	scan_up(host:INTEGER; target:INTEGER):BOOLEAN
			-- index `host' checks if the index `target' is on its up
			-- and in the same column returns true if the target is found.
		require
			host_positive: host > 0
			target_positive: target > 0
		do
			if
				target < host and
				get_x_axis(target, mode) = get_x_axis(host, mode)
					-- both must be in the same column
			then
				Result := true
			end
		end

	scan_down(host:INTEGER; target:INTEGER):BOOLEAN
			-- index `host' checks if the index `target' is on its down
			-- and in the same column returns true if the target is found.
		require
			host_positive: host > 0
			target_positive: target > 0
		do
			if
				target > host and
				get_x_axis(target, mode) = get_x_axis(host, mode)
					-- both must be in the same column
			then
				Result := true
			end
		end

	get_x_axis(index: INTEGER; mod: INTEGER): INTEGER
			-- calcuate x_axis,column based on defined `mod'(number
			-- of units per line) and index in the list
	require
		index_positive: index > 0
		mod_positive: mod > 0
	do
		Result := (index - 1) \\ mod
	ensure
		x_correct: Result = (index - 1) \\ mod
	end

	get_y_axis(index: INTEGER; mod: INTEGER): INTEGER
			-- calcuate y_axis,row based on defined `mod'(number
			-- of units per line) and index in the list
	require
		index_positive: index > 0
		mod_positive: mod > 0
	do
		Result := (index - 1) // mod
	ensure
		y_correct: Result = (index - 1) // mod
	end

invariant
	space_units_non_void: space_units /= void
	count_range: count >= 0 and count <= game_units
	count_klingons_range: count_klingons >= 0 and count_klingons <= max_klingons
	uss_e_id_range: uss_e_id >= 0 and uss_e_id <= game_units
	count_equal_units: count = space_units.count

end
