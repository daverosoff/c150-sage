A Little Quiz
=============

(Inspiration for this assignment from Graham Mitchell.)

In this exercise, you'll hone your input, output, and conditional statement
skills. The most important flow of steps we've learned so far is:

1. Ask a question
2. Save the answer in a variable
3. Do some computation with the variable (and maybe some others)
4. Show some output

Many, many programs are variations on this theme. (Maybe all of them?)

Prerequisites
-------------

You should be able to answer all the Piazza questions about relational
operators (like `!=`, `<=`, and `==`) and logical operators (like `&&`
and `!`) correctly.

Instructions
------------

Write a program that gives the user a short multiple-choice quiz, using
questions of your own invention. Be careful to make sure that they are
sensible, and keep paying attention to things like spacing, spelling,
and punctuation in your output. Here is a sample quiz for you to use as
a model.

```
Are you ready for a quiz (y/n)? y
Okay, here it comes!

Q1) What is the capital of Montana?
    1) Bozeman
    2) Billings
    3) Helena

> 3

That's right!

Q2) Can you store the value "cat" in a variable of type int?
    1) yes
    2) no

> 1

Sorry, "cat" is a string. ints can only store numbers.

Q3) What is the C++ value of the expression 9+8/4?
    1) 4
    2) 4.25
    3) 11

> 3

That's correct!


Overall, you got 2 out of 3 correct.
Thanks for playing!
```

***NOTE:*** You will need a lot of variables to handle all of these text,
to store values inputted by the user, and to keep track of the score. It
might help you to make a quick flowchart before you get to coding.

You can use some special characters, called "tab" and "newline" to format
your output so that it looks like the model. Experiment with the symbols
`\t` and `\n` in your `cout` expressions to see what they do.

Submitting your work
--------------------

The file `little_quiz.c++` is due at 2:00 pm on Friday, September 23.
