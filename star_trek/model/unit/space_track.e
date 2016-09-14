note
	description: "[
			Summary description for {SPACE_TRACK}. Inherit from SPACE_UNIT.
			space that allow aircrafts fly through.
			]"
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	SPACE_TRACK

inherit
	SPACE_UNIT

create
	make

feature {NONE} -- Initialization

	make(a_id: INTEGER)
		-- create a basic space track
		require
			id_in_range: a_id > 0 and id <= max_id
		do
			create name.make_from_string(" . ")
			id := a_id
		ensure
			name_correct: create {STRING}.make_from_string(" . ") ~ name
			id_correct: id = a_id
		end

feature -- SPACE_TRACK attribtes
	name: STRING
	id: INTEGER -- index of the collection where SPACE_TRACK resides

feature -- command
	set_id(index:INTEGER)
		-- set a new id `index'
	do
		id := index
	end


invariant
	name_correct: create {STRING}.make_from_string(" . ") ~ name
	id_in_range: id >= 0 and id <= max_id
end
