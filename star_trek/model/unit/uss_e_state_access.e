note
	description: "Summary description for {USS_E_STATE_ACCESS}. Singleton access to the USS_E_STATE_ACCESS"
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	USS_E_STATE_ACCESS

feature
	uss_e_state: USS_E_STATE
			-- create singleton access to the USS_E_STATE
		once
			create Result.make
		end
invariant
	is_singleton: uss_e_state = uss_e_state
end
