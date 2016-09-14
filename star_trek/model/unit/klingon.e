note
	description: "[
			Summary description for {KLINGON}. Inherit from SPACE_TRACK.
			KLINGON, a invading fleet of Klingon warship
			]"
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	KLINGON

inherit
	SPACE_UNIT

create
	make

feature {NONE} -- Initialization

	make(a_id: INTEGER)
			-- create a klingon war craft
		require
			a_id_in_range: a_id > 0 and a_id <= max_id
		do
			create name.make_from_string(" * ")
			id := a_id
		ensure
			name_correct: create {STRING}.make_from_string(" * ") ~ name
			id_correct: id = a_id
		end

feature -- KLINGON attriburtes
	name: STRING
	id: INTEGER -- index of the collection where klingon resides

feature -- Command
	set_id(index:INTEGER)
		-- set a new id `index'
	do
		id := index
	end

invariant
	name_correct: create {STRING}.make_from_string(" * ") ~ name
	id_in_range: id >= 0 and id <= max_id
end
