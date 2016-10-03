Loop Art
========

Due: Wednesday, October 5, at 2:00 pm

For this assignment, you will write three C++ programs. Each program should be
in a separate file. The file for the first question should be named
`reverse.c++`, the file for the second question should be named `boxes.c++`,
and the file for the third question should be named `mario-hills.c++`.

Each program that you write should have some comment lines at the top that
show the assignment and question number, your name and the date the program
was written, and a description of the program. Here's an example. Your comment
lines need to look very similar to these, except (obviously) for your name.

    // CSC-150 Daily assignment 10, question 3
    // File: mario-hills.c++
    // Dave Rosoff, 2016-09-27
    // P4.23 in Horstmann. This program prints Mario hills of various sizes.

----------------------------------------

#### QUESTION 1

Do programming exercise 4.12 on page 180 of Horstmann. The instructions are:

*Write a program that reads a word and prints the word in reverse.*

Here is a sample session.

    Enter a word for me to reverse: foobar
    The reverse of foobar is raboof.

Remember, there is a string *method* that gives you the length of a
string, and you can access a single character in the string with
square brackets `[]`.

----------------------------------------

#### QUESTION 2

Do programming exercise 4.22 on page 182 of Horstmann. The instructions are:

*Write a program that reads an integer and displays, using asterisks, a
filled and hollow square, placed next to each other.*

Sample session 1:

    Enter a positive integer side length: 5
    ***** *****
    ***** *   *
    ***** *   *
    ***** *   *
    ***** *****

Sample session 2:

    Enter a positive integer side length: -3
    Bad input! Terminating.

Remember to `return 1` for erroneous user input.

*Hint.* You need to use both loops and conditionals here.

----------------------------------------

#### QUESTION 3

Draw some Mario hills (see below for examples).

*Write a program that reads an integer and displays, using asterisks, Mario hills
of the given height, separated by two blank spaces.*

Sample session 1:

    Enter a positive integer height: 5
        *  *
       **  **
      ***  ***
     ****  ****
    *****  *****

Sample session 2:
    Enter a positive integer height: 1
    * *

Sample session 3:
    Enter a position integer height: 0
    Bad input! Terminating.

Submitting your work
--------------------

Before you submit, ask yourself...

1. Do I have a comment block at the very beginning of my files?
2. Have I duplicated all specified output exactly?
3. ...including prompts, punctuation, capital letters, spaces, and blank lines?
