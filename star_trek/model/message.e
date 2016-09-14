note
	description: "Summary description for {MESSAGE}. Game messages to notify the player."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	MESSAGE

feature -- Global Constants of game messages
	greeting:STRING = "%N Welcome to USS Enterprise, Captain!%N Your fleet is ready to commence.%N"
			-- message at the start of the game

	luck_intro:STRING = " Upon you move, you may pick up some%N  supply left by our Allies.%N"
			-- luck rule indroduction at the start of the game

	attack_warning:STRING = " Your attack will expose your position%N  and attract attacks from klingons on%N  your row and column.%N%N"
			-- attack warning for venge mode

	command:STRING = " command: "
			-- command

	restart:STRING = " To restart the game, enter 's'. Or enter 'q' to quit.%N"
			-- restart the game

	menu:STRING = " %(l-left  r-right  u-up  d-down  al-attack left %N ar-attack right au-attack up  ad-attack down  q-quit%)%N"
			-- menu of the command options

	edge:STRING = " You have reached to the edge, choice another direction.%N"
			-- reach the edge of quadrant

	point:STRING = " torpedo+1, energy+100, shields+100.%N"
			-- point message

	gain_point:STRING = " Destoried one klingon fleet.%N torpedo+1, energy+100, shields+100.%N"
			-- destoried one klingon

	miss: STRING = " No klingons on your attacked direction.%N"
			-- no target is hit

	victory:STRING = " VICTORY!%N Congratulations, Captain! You destoried all invaders.%N Enter any key to start a new mission.%N"
			-- victory, clear all klingons in the quadrant

	lose:STRING = " USS Enterprise condition is DEAD.%N Mission failed!%N"
			-- lose the game, USS Enterprise condition is dead

	quit:STRING = " Mission Aborted!%N"
			-- quite the game

	uss_e_err:STRING = "ERR: USS_ENTERPRICE not loaded yet"
			-- USS_E load error

	uss_e_move_err: STRING = "ERR: USS_ENTERPRICE not loaded yet"
			-- USS_E move error

	move: STRING = " Message: move costs 50 energy%N"
			-- move cost message

	crash: STRING = " Warning: crashed into a Klingon fleet, -500 shields!%N"
			-- crash into a klingon, lost 500 shields

	red_help: STRING = " Warning!%N USS Enterprice is in RED condition.%N Enter 'h' to call for ammunition%N Or enter any key to pass.%N"
			-- offer hidden option when USS_E state is RED

	red_call:STRING = " Ammunition is arrived!%N torpedo+1, energy+100, shields+100.%N"
			-- ammunition is arrived after RED state help request

	luck: STRING = " Congratulations!%N You just picked up some supply left by our Allies.%N torpedo+1, energy+100, shields+100.%N"
			-- hit luck by moving into a lucky space position
end
