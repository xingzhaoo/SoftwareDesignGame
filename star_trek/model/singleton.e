note
	description: "Summary description for {SINGLETON}."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SINGLETON

feature {NONE}
	the_singleton:SINGLETON
		-- the unique instance of this class
		-- should be redefined as a once function
		-- return Current in concrete subclass
		deferred
		end

invariant
	only_one_instance: Current = the_singleton
end
