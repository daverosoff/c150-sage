Function practice
=================

In this exercise, you'll practice writing small functions that perform simple
arithmetic tasks.

Prerequisites
-------------

You need to understand the ideas of function *arguments*, *return values*, and
*data types* before this exercise will make sense. Make sure you have read 5.1
and 5.2.

Instructions
------------

Write the functions specified in Horstmann P5.3, 4, 6, 7, 8, and 9. Put all
your function definitions into the supplied code scaffold
`function_practice.cpp`. It doesn't matter what order the function definitions
go in, as long as `main()` comes last. Don't add to or change the `main()`
function at all&mdash;it needs to stay exactly the same.

Compile `function_practice.cpp` to test your functions. Use the new compiler command:

```
g++ -Wall -Werror -pedantic -Wfatal-errors -o function_practice function_practice.cpp
```

It should flag any bugs for you. Do you see how the `main()` function can be
written to test others? Some people call this a "driver" program. The
functions do all the work, and `main()` test-drives them on a few examples.

When you are done, save your file `function_practice.cpp`. Then, save a second
file including only your function definitions&mdash;no `#include` directives,
`using` statements, or `main()` function&mdash;with filename
`function_practice.h`. We'll see how to use this file later on.

**NOTE: none of your functions should produce any output.** All output in the
program `function_practice.cpp` should be produced by the `main()` function.
