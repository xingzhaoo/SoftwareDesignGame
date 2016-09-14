note
	description: "Summary description for {RAND_SEQ}. Generate random INTEGER."
	author: "Xing Zhao"
	date: "$Date$"
	revision: "$Revision$"

class
	RAND_SEQ

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
			-- This computes milliseconds since midnight.
		do
			create r_time.make_now
			r_seed := r_time.hour
  			r_seed := r_seed * 60 + r_time.minute
   			r_seed := r_seed * 60 + r_time.second
   			r_seed := r_seed * 1000 + r_time.milli_second

   			create r.make -- initialise random number
   			r.set_seed (r_seed)
		end

feature {NONE} -- attributes
	r_time:TIME
	r_seed:INTEGER
	r:RANDOM

feature -- query
	get_seed:INTEGER
			-- return a random seed
		do
			Result := r_seed
		ensure
			correct_seed: Result = r_seed
		end

	get_rnd:RANDOM
			-- return a RANDOM r
		do
			Result := r
		ensure
			correct_r: Result = r
		end

	get_random_set(num: INTEGER; index: INTEGER): LIST[INTEGER]
			-- generate an unique set of random number in range from 0 to `index'
			-- the size of the set is `num'
	require
		num_positive: num > 0
		mod_positive: index > 0
	local r_set: LIST[INTEGER]
		  n: INTEGER
	do
		create {ARRAYED_LIST[INTEGER]} r_set.make (num) -- initialise set

		from -- obtain random numbers
			r.start
		until
			r.after or r_set.count = num -- set must be full filled
		loop
			 -- restrict the range of rand number within `index'
			n := r.item \\ index
			if
				not r_set.has (n)
					-- ensure uniquness of set
				and n /= 0
					-- zero is not a valid index
			then
				r_set.extend (n)
			end

			r.forth
		end

		Result := r_set

	ensure
		correct_size: Result.count = num
	end

invariant
	non_void_time: r_time /= void
	non_void_rand: r /= void
end
