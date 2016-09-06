Books and Units
===============

**Due date: Wednesday, September 7, at 2:00 pm**

<!-- MarkdownTOC -->

- [Prerequisites](#prerequisites)
- [Shipping books](#shipping-books)
- [Submitting your work](#submitting-your-work)

<!-- /MarkdownTOC -->


<a name="prerequisites"></a>
Prerequisites
-------------

Before beginning this assignment, you should know how to:

* Use `cout` and `endl` to format your text nicely on the screen
* Use quotation marks `""` to print strings of text
* Print the results of arithmetic calculations. 

To make sure you can do this, do the following warm-up exercise. Write a 
program `age_data.c++` that prints some information about your age. Recall that there
are 365 days in a year (don't worry about leap year), 24 hours in a day,
60 minutes in an hour, and 60 seconds in a minute. Here's the output for
my program. Make yours about you.

    I was born on August 9, 1980. I am 36 years and 28 days old today.
    36 years and 28 days is equal to 13168 days.
    13168 days is equal to 316032 hours.
    316032 hours is equal to 18961920 minutes.
    18961920 minutes is equal to 1137715200 seconds.

<a name="shipping-books"></a>
Shipping books
--------------

(This is problem P2.11 from our textbook.) The following pseudocode describes
how a bookstore computes the price of an order from the total price and the
number of the books that were ordered.

    Read the total book price and the number of books from the input. 
    Compute the tax (6% of the total book price). 
    Compute the shipping charge ($2 per book). 
    The price of the order is the sum of the total book price, the tax, and the shipping charge. 
    Print the price of the order. 

Translate this pseudocode into a C++ program, `shipping_books.c++`. Make sure to test your program
to see that it works. Here are a few sample runs. Make sure your program
produces **exactly the same output** as these test cases do when you give it
the same inputs.

    Enter the total price of the order: 45.25
    Enter the number of books in the order: 3
    Thank you.
    The tax is $2.715 and the shipping cost is $6.
    The total cost of the order is $45.25 + $2.715 + $6 = $53.965.

    Enter the total price of the order: 1283.92
    Enter the number of books in the order: 34
    Thank you.
    The tax is $77.0352 and the shipping cost is $68.
    The total cost of the order is $1283.92 + $77.0352 + $68 = $1428.96.

    Enter the total price of the order: 24.20
    Enter the number of books in the order: 8
    Thank you.
    The tax is $1.452 and the shipping cost is $16.
    The total cost of the order is $24.2 + $1.452 + $16 = $41.652.

* Notice that some of the outputs are not formatted the way we usually write
  currency values, that is, too many or too few decimals. Don't worry about
  this for now.
* Do *not* worry about negative prices or a negative number of books.

<a name="submitting-your-work"></a>
Submitting your work
--------------------

The files due on Wednesday, September 7, at 2:00 pm are:

* `age_data.c++`
* `shipping_books.c++`
