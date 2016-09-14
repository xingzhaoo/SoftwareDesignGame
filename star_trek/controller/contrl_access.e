note
	description: "Summary description for {CONTRL_ACCESS}. Singleton access to CONTRL."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	CONTRL_ACCESS

feature
	singleton(m:SPACE_MAIN_UNITS;v:DISPLAY):CONTRL
			-- create singleton access to the CONTRL
		require
			non_void_m: m /= void
			non_void_v: v /= void
		once
			create Result.make(m,v)
		ensure
			is_singleton: Result = Result
		end

end
