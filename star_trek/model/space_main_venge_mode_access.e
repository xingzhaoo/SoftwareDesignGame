note
	description: "Summary description for {SPACE_MAIN_VENGE_MODE_ACCESS}. Singleton access to the SPACE_MAIN_UNITS."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	SPACE_MAIN_VENGE_MODE_ACCESS

feature
	singleton(m:SPACE_MAIN_UNITS):SPACE_MAIN_VENGE_MODE
			-- create singleton access to the SPACE_MAIN_VENGE_MODE
		require
			non_void_m: m /= void
		once
			create Result.make(m)
		ensure
			is_singleton: Result = Result
		end

end
