note
	description: "[
					Summary description for {SPACE_MAIN_VENGE_MODE}. 
					A decorator class for SPACE_MAIN_UNITS.
					VENGE_MODE is once klingon under the attack, it
					scans its enemy vertically and horizontally and
					attack back to its enemy.
					]"
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	SPACE_MAIN_VENGE_MODE

inherit
	SINGLETON

create
	make

feature {NONE} -- Initialization

	make(m:SPACE_MAIN_UNITS)
			-- Initialization for `Current'.	
		do
			main_units := m
			damage_report := create {STRING}.make_empty
		ensure
			correct_main_units: main_units = m
		end

feature {NONE} -- singleton
	the_singleton:SINGLETON
			-- the unique instance of this class
		once
			Result := Current
		end
		
feature {NONE} -- attributes
	main_units: SPACE_MAIN_UNITS
	hundred:INTEGER = 100
			-- hit by a klingon costs 100 shield

feature -- attributes
	hit_count:INTEGER -- successful hit
	damage_report: STRING -- report damge to uss_e

feature -- command
	venge
		-- klingons attack starts
		local
			uss_e: INTEGER -- index of USS_E
			list: LIST[SPACE_UNIT]
		do
			uss_e := main_units.uss_e_id
			list := main_units.space_units
 			across list as k loop
 				if attached {KLINGON} k.item as vange_k then
					if	-- klingon scans and attacks uss_e
						main_units.scan_left (vange_k.id, uss_e) or
						main_units.scan_right (vange_k.id, uss_e) or
						main_units.scan_up (vange_k.id, uss_e) or
						main_units.scan_down (vange_k.id, uss_e)
					then
						hit_count := hit_count + 1
					end
 				end
 			end

			if hit_count > 0 then
						-- hit happened
				if
					attached {USS_ENTERPRISE} list[main_units.uss_e_id] as uss_t
						-- conforms to USS_ENTERPRICE from SPACE_UNIT
				then
					across 1 |..| hit_count as c
					loop uss_t.hit end	-- deduct shields from USS_E
					damage_report := " Warning!%N You are attacked by "+
								hit_count.out + " klingons: -"+
								(hit_count * hundred).out +" shields%N"
				else
					print(" link to USS_E error in venge mode.")
				end
			end
		end

	reset
		-- clear history of venge mode
		do
			hit_count := 0
			damage_report := create {STRING}.make_empty
		ensure
			hit_reset: hit_count = 0
			report_reset:
				damage_report ~ create {STRING}.make_empty
		end

invariant
	non_void_m: main_units /= void
end
