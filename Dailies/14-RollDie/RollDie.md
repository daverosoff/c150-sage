Roll a die
==========

* File `roll_die.h` is due Friday, November 4, at 2:00pm

Instructions
------------

In the file `roll_die.h`, write a function that rolls a die whose number
of faces is specified as a parameter. This function should return a value
between 1 and the number of faces (inclusive). Your `roll_die.h` file will need
to `#include` any headers you need. You can compile the supplied `roll_die.c++`
file to test your function.

Since your function always has to return an `int` value, let it return `-1` if
the parameter passed in as the face number is invalid. It will be the responsibility
of whoever uses your function to check for this `-1` and handle errors appropriately.

Your function needs to pass the tests in `roll_die.c++`, but you also need
instructor approval to finish this assignment. When your code passes all the
tests, have the instructor check.
