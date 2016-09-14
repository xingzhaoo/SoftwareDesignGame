note
	description: "star_trek application root class"
	author: "Xing Zhao"
	date: "2016 July 26"
	revision: "1.0"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			game_singleton: SPACE_MAIN_UNITS_ACCESS
			control_singleton:CONTRL_ACCESS
		do
			-- Add your code here
			model_game := game_singleton.m
					-- get game model in singleton
			create view_game.make
					-- create game view
			control_game :=
				control_singleton.singleton(model_game, view_game)
					-- get game controller in singleton
			control_game.start
					-- game start
		end

feature -- attributes
	model_game: SPACE_MAIN_UNITS
			-- game model
	view_game: DISPLAY
			-- game view
	control_game: CONTRL
			-- game controller
end
