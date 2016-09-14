note
	description: "Summary description for {DISPLAY}. Display view in text for user."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	DISPLAY

create
	make

feature {NONE} -- Initialization

	make
				-- Initialization for `Current'.		
		do

		end

feature -- commands
	send(content:STRING)
		-- send the content to the view or presentation
		-- print out the game in this case
	require non_void_content: content /= void
	do
		print(content)
	end

	receive:STRING
		-- return the received content from user/input
	do
		create Result.make_empty
		io.readline
			-- get user input from command
		Result := io.last_string.twin
			-- retrieve the user input
		io.new_line
	ensure
		correct_input: Result ~ io.last_string
	end

end
