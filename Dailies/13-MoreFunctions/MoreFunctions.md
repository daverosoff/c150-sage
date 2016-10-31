Function practice
=================

* File `more_functions.h` is due Wednesday, November 2, at 2:00 pm

In this exercise, you'll practice writing some more small functions. No `main()` function
is provided this time.

Prerequisites
-------------

You need to understand the ideas of function *arguments*, *return values*, and
*data types* before this exercise will make sense. Make sure you have read Chapter 5 through
section 5.5

Instructions
------------

Implement the following functions. You can do this in several different files or one big one.

3. `head()`: given a nonempty string, `head()` returns its first character.
1. `tail()`: given a nonempty string, `tail()` returns its last character.
1. `behead()`: given a nonempty string, `behead()` returns all but the first (zeroth) character.
   It should return the empty string if given an empty string.
2. `curtail()`: given a nonempty string, `curtail()` returns all but the last character.
   It should return the empty string if given an empty string.
5. `even()`: given a string, `even()` returns the string's even characters.

        even("Happy Halloween") --> "HpyHloen"
        even("Hi friend") --> "H red"

6. `mark()`: given a string and a character, `mark()` returns a string of the same length marking the occurrences of the character.

        mark("Happy Halloween", 'H') --> "^     ^        "

When the string and the value of `mark()` are printed vertically, it looks like this:

        Happy Halloween
        ^     ^

Submitting your work
--------------------

When you have finished, collect all your function definitions in the file `MoreFunctions.h`. It should not have any `#include`, `using namespace`, or `main()`---just your function definitions.

File `more_functions.h` is due Wednesday, November 2, at 2:00 pm
