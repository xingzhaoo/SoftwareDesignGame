note
	description: "Summary description for {SPACE_UNIT_STATE}. Maintain the state of SPACE_UNIT if applicable"
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SPACE_UNIT_STATE

feature -- attribute
	state:STRING
			-- state of the SPACE_UNIT
	deferred
	end

	update(s:SPACE_UNIT)
	require
		non_void_s: s /= void
			-- check and update the state of SPACE_UNIT
			-- based on the game speficication
	deferred
	end

invariant
	non_void_state: state /= void
end
