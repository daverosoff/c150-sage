Guess the Country
=================

Due at 2:00pm on Tuesday, September 27

This is the last daily assignment before we move on to Chapter 4. In it,
you'll make sure you understand the two most important ways to handle
complex conditional statements.

Prerequisites
-------------

Your Little Quiz (daily 07) should be running well. If you are having problems
with it, you need to get help from the instructor before long. Things are
about to get more complicated soon, and this will continue until the end of
the semester.

Instructions
------------

Implement a simple guessing game in the file `country_guess_compound.c++`. The
game lets the computer try to guess the country the user is thinking of in
three steps. Here are some sample runs. It is not a very smart program, but
that is OK. **MAKE THE OUTPUT LOOK EXACTLY LIKE THE SAMPLE**. You don't need
to detect or guard against bad input. You can assume the user is doing it
right.

Sample 1:
```
Is your country in (1) Africa (2) the Americas (3) Eurasia (4) Oceania? 3
Is your country (1) more east or (2) more west? 2

Then your country must be Portugal!
```

Sample 2:
```
Is your country in (1) Africa (2) the Americas (3) Eurasia (4) Oceania? 1
Is your country (1) more east or (2) more west? 1

Then your country must be Kenya!
```

Sample 3:
```
Is your country in (1) Africa (2) the Americas (3) Eurasia (4) Oceania? 2
Is your country (1) more east or (2) more west? 1

Then your country must be Brazil!
```

Here is a table you can use to fill in the 8 different values if you are too
lazy to think of the answers yourself (you can use whatever answers you want,
but the questions have to be right).

|      | Africa | Americas | Eurasia  | Oceania    |
|------|--------|----------|----------|------------|
| East | Kenya  | Brazil   | Japan    | Fiji       |
| West | Ghana  | Chile    | Portugal | New Guinea |

### Compound conditions only: no nesting

To receive credit, your program in `country_guess_compound.c++` must not use
any nested `if` statements, like this:

    if (condition1)
    {
        if (condition2)
        {
            do stuff
        }
        else
        {
            do stuff
        }
    }

Achieve the results you need with compound conditions, that is, ones that involve
logical operators such as `&&`, `||`, and `!`.

Finish the workshop at home
---------------------------

When you have finished `country_guess_compound.c++`, make a copy of it called
`country_guess_nested.c++`. Rewrite the code in the latter file so that it only
uses nested `if` statements and avoids all logical operators in the conditions.

Submitting your work
--------------------

The following files are due at 2:00pm on Tuesday, September 27:

* `country_guess_compound.c++`
* `country_guess_nested.c++`
