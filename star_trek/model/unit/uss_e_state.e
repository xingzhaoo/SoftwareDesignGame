note
	description: "Summary description for {USS_E_STATE}. Maintain the state of USS_ENTERPRISE."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	USS_E_STATE
inherit
	SPACE_UNIT_STATE
	SINGLETON
create {USS_E_STATE_ACCESS}
	make

feature {NONE}	-- Initialization
	make
		do
			state := "GREEN"
		end

feature {NONE} -- singleton
	the_singleton:SINGLETON
			-- the unique instance of this class
		once
			Result := Current
		end

feature	-- attribute
	state:STRING
		-- 3 levels: GREEN, RED, DEAD

feature -- cmd

	update(e:USS_ENTERPRISE)
			-- update internal state based on pre-set conditions
		require else
			is_uss_e: e.name ~ "-E-"
		do
			if -- condition for DEAD
				e.energy <= 0 or e.torpedoes <= 0
				or e.shields <= 0
			then
				state := "DEAD"
			elseif -- condition for RED
				e.energy < 600 or e.torpedoes < 3
				or e.shields <= 500
			then
				state := "RED"
			else -- rest condition for GREEN
				 -- in case of get_point
				state := "GREEN"
			end
		ensure then
			correct_state: state = e.condition.state
		end

invariant
	condition_correct:
		create {STRING}.make_from_string("GREEN") ~ state or
		create {STRING}.make_from_string("RED") ~ state or
		create {STRING}.make_from_string("DEAD") ~ state

end
