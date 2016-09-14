note
	description: "Summary description for {SPACE_UNIT}. Deferred Class SPACE_UNIT to store a basic unit in the game."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SPACE_UNIT

feature -- SPACE_UNIT information
	name: STRING
		-- unit category or name
			deferred
			ensure
				name /= void
			end

	id: INTEGER
		-- unit position in list
			deferred
			ensure
				id > 0 and id <= max_id
			end

	max_id:INTEGER = 64
		-- global constant, max number a id can be

feature -- command
	set_id(index:INTEGER)
		-- set a new id `index'
	require
		index_positive: index > 0 and index <= max_id
	deferred
	ensure
		id_assigned: id = index
	end

invariant
	name_non_void: name /= void
	id_in_range: id > 0 and id <= max_id
end
