note
	description: "Summary description for {CONTRL}. Controller of the game"
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	CONTRL

inherit
	SINGLETON

create
	make

feature {NONE} -- Initialization

	make(m:SPACE_MAIN_UNITS;v:DISPLAY)
			-- Initialization for `Current'.
		require
			non_void_m: m /= void
			non_void_v: v /= void
		do
			model := m
			view := v
		ensure
			model_correct: model = m
			view_correct: view = v
		end

feature {NONE} -- singleton
	the_singleton:SINGLETON
			-- the unique instance of this class
		once
			Result := Current
		end
		
feature {NONE} -- Attributes
	model:SPACE_MAIN_UNITS
	view:DISPLAY

	game_units:INTEGER
		do
			Result := model.game_units
		end

feature -- public attribute
	r:RAND_SEQ
			-- provide random features from RAND_SEQ
		do
			create Result.make
		end

feature {NONE} -- constants
	invalid_command:STRING = " Please enter a valid input.%N"
			-- to prompt user for any invalid input

feature -- command

	start
		-- game start
		local
			input:STRING	-- user input
			output:STRING	-- operation output
			buffer:STRING	-- buffer output
			luck:INTEGER	-- luck point upon each move
			venge_mode: SPACE_MAIN_VENGE_MODE
							-- add decorator, venge mode
			venge_access: SPACE_MAIN_VENGE_MODE_ACCESS
							-- singleton access to venge mode
		do
			create output.make_empty
			create buffer.make_empty

			venge_mode := venge_access.singleton (model)
							-- add decorator
			-- start game
			view.send (model.report.greeting)
							-- send greeting message
			view.send (model.report.luck_intro)
							-- luck rule introduction
			view.send (model.report.attack_warning)
							-- attack warning for venge mode
			from
				create input.make_empty
				luck := (r.get_rnd.item \\ game_units) + 1
							-- luck must be within range of the list
			until
				input ~ "q"
			loop
				-- display the game using view
--				print(luck.out + ":"+model.uss_e_id.out+"%N")
							-- enable print to test luck point
				view.send (model.out)
				view.send (output)
				view.send (model.report.menu)
				view.send (model.report.command)
							-- get user input from view
				input := view.receive
				-- model execute the user input
				if			-- navigation or move
					input ~ "l" or input ~ "r" or
					input ~ "u" or input ~ "d"
				then
					output := model.move (input)
					if model.uss_e_id = luck then
							 -- check luck point upon a move
						model.uss_e_ammunition_call
							-- gain points
						output := output + model.report.luck
						luck := (r.get_rnd.item \\ game_units) + 1
							-- reset luck point
					end

				elseif 		-- attack
					input ~ "al" or input ~ "ar" or
					input ~ "au" or input ~ "ad"
				then
					output := model.attack (input)
					venge_mode.venge
							-- use decorator
					output := output + venge_mode.damage_report
					venge_mode.reset
							-- venge records reset
				elseif input ~ "q" then -- quit game
					view.send (model.report.quit)
				else
					buffer := invalid_command
							-- flag for RED state
					output := invalid_command
							-- move warning to next new display
				end

				if
					input /~ "q" and
					buffer /~ invalid_command and
							-- state changes
					model.uss_e_state ~ "RED"
							-- RED state
							-- hidden option h is offered
				then
					view.send (model.out)
					view.send (output)
					output := ""
							-- clear previous message
					view.send (model.report.red_help)
					view.send (model.report.command)
							-- get command
					input := view.receive
					if input ~ "h" then
						model.uss_e_ammunition_call
						output := model.report.red_call
						buffer := invalid_command
							-- h is only offered once
					elseif input ~ "q" then
							-- allow quit in this state
						view.send (model.report.quit)
					else
						buffer := invalid_command
							-- h is only offered once
					end
				end

				if
					model.is_victory
							-- victory when klingons are cleared
				then
					view.send (model.out)
					view.send (model.report.victory)
					input := view.receive
							-- move to a new game, buffer any input
					input := ""
							-- clear buffer
					output := ""
					buffer := ""
					model.continue
					luck := (r.get_rnd.item \\ game_units) + 1
							-- new luck point
					view.send (model.report.greeting)
							-- disply greeting
				end

				if
					model.uss_e_is_alive = false
							-- lose the game, option to restart or quit
				then
					view.send (output)
					view.send (model.report.lose)
					view.send (model.report.restart)
					view.send (model.report.command)
					from
						input := view.receive
					until
						input ~ "s" or
						input ~ "q"
					loop
						view.send (invalid_command)
						view.send (model.report.command)
						input := view.receive
					end

					if input ~ "s" then -- restart game
						model.reset
						view.send (model.report.greeting)
								-- send greeting message
						view.send (model.report.luck_intro)
								-- luck rule introduction
						view.send (model.report.attack_warning)
								-- attack warning for venge mode
						output := ""	-- clear previous message
						buffer := ""
						luck := (r.get_rnd.item \\ game_units) + 1
								-- new luck point
					elseif input ~ "q" then
						view.send (model.report.quit)
					end
				end
			end -- loop end
		end

invariant
	non_void_m: model /= void
	non_void_v: view /= void
	game_units_correct: model.game_units = game_units
end
