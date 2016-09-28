Loop Practice
=============

Prerequisites
-------------

You should have understood the `FirstLoops` daily and the first quiz
from Chapter 4.

Instructions
------------

Call your file <code>while_for_practice.cpp</code> (you don't need to put your name in the filename). Write a program with loops that compute

1. The sum of all even numbers between 88 and 202, inclusive.
2. The sum of all square numbers between 15 and 340, inclusive.
3. All powers of 2 from 2<sup>0</sup> up through 2<sup>20</sup>. (Remember to `#include <cmath>`.) Pay attention to punctuation in the sample!

Sample output:

    The sum of all even numbers between 88 and 202 is 8410.
    The sum of the squares between 15^2 and 34^2 is 12670.
    The powers of 2 from 2^0 through 2^20 are:
    1,
    2,
    4,
    8,
    16,
    32,
    64,
    128,
    256,
    512,
    1024,
    2048,
    4096,
    8192,
    16384,
    32768,
    65536,
    131072,
    262144,
    524288,
    1048576.

Use the `fixed` and `setprecision(0)` manipulators (and remember to `#include
<iomanip>`; see Chapter 2.3 for more details) to avoid scientific
notation for big integers.

If you are finished
-------------------

To get even more loop practice, add more code to your program to produce
the following output:

4. The sum of the reciprocals of all integers between a and b (inclusive), where a and b are supplied by the user.
5. The sum of all square numbers between 1 and n<sup>2</sup> (inclusive), where n is supplied by the user.

Sample output:

    Enter two integers, the smaller one first: 5 13
    The sum of the integers between 5 and 13 is 81.
    Enter a positive integer: 7
    The sum of all square numbers between 1 squared and 7 squared is 140.

