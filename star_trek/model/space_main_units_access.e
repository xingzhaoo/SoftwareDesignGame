note
	description: "Summary description for {SPACE_MAIN_UNITS_ACCESS}. Singleton access to the SPACE_MAIN_UNITS."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	SPACE_MAIN_UNITS_ACCESS

feature
	m: SPACE_MAIN_UNITS
			-- create singleton access to the SPACE_MAIN_UNITS
		once
			create Result.make
		end

invariant
	is_singleton: m = m
end
