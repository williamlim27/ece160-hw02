# ece160-hw02
For this assignment, you will need to fork this respotiory (see the upper-right corner of this page).
Once you have your own fork, clone it like you would with any other repository. Edit the methods in 
`hw02.c` to return the correct values, and then commit and push your changes to your fork.

You will need to implement two functions:
* `print_int_ranges` should determine the size of a `short, `int`, `unsigned int`, and `long` on the runtime system and compute the value ranges of each. Note that this is platform dependent; the output will be different depending on where you run the program, but you can use `sizeof` to ensure that your function is correct on any system. 
* `is_bit_set` takes in a value and a bit index and returns whether the bit in the value at that index is set. Let index 0 be the least significant bit. 

Details about the implementations of the functions in `hw02.c` are in the comments.
