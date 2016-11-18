Daily 16: Vector Management
===========================

* `vector_management.c++` due Monday, November 21 at 2:00

Prerequisites
-------------

Understand the requirements of Problem Set 05 and 06. You also should be able to
create vectors of any data type, either initializing them to be empty or with a
list enclosed in curly braces `{}`.

Instructions
------------

In the file `vector_management.c++`, you'll write some functions.

1. Write a function `void shuffle(vector<int>& vec)` that reorders the elements
of the vector `vec` in a random way. Remember to `#include` the appropriate
headers (there are two) and to execute `srand(time(0))` exactly once, in
`main()`. Here is a description of the shuffling algorithm to use.

  a. You will need the `swap()` function provided by the `<utility>` header. Add
  a line to your file to include it.
  b. For each entry in the vector:

    1. Generate a random position.
    2. Swap the current entry with the one at the random position, using `swap()`.

  c. Now the entries of the original vector are shuffled in place (because we
  passed `vec` by reference.)

2. In your War game, you will implement the deck of cards as a `vector<int>`
whose entries are `0` through `51`. The cards to which these integers correspond
are determined by the following order:

  2♥ 2♣ 2♦ 2♠ 3♥ 3♣ 3♦ 3♠ 4♥ 4♣ 4♦ 4♠ 5♥ 5♣ 5♦ 5♠ 6♥ 6♣ 6♦ 6♠ 7♥ 7♣ 7♦ 7♠ 8♥ 8♣
  8♦ 8♠ 9♥ 9♣ 9♦ 9♠ T♥ T♣ T♦ T♠ J♥ J♣ J♦ J♠ Q♥ Q♣ Q♦ Q♠ K♥ K♣ K♦ K♠ A♥ A♣ A♦ A♠

  That is to say, the five of hearts corresponds to 12, the two of clubs to 1,
  the king of diamonds to 46, and so on. (The suits---hearts, spades, diamonds,
  clubs---are not relevant to War gameplay but it is traditional to include
  them.)

  Write a function `vector<int> initialize()` that creates a vector representing
  the deck of cards in exactly the order pictured above. (Don't overthink this.)

3. Your code contains a function `string interpret(int a)` that returns the
appropriate character string for an integer between 0 and 51, according to the
table above. For example, the value returned by `interpret(12)` is the string
"5♥". Write a function `void deck_report(const vector<int>& d, const string& mesg)`
that prints the values of the cards in the deck in the order they are stored. For example, if the vector `{5, 3, 7}` and the string `"Player 1:"` are passed to this function, it should print

    Player 1: 3♣ 2♠ 3♠

