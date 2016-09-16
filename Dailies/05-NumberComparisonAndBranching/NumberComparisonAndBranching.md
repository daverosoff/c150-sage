Number comparison and branching
===============================

Prerequisites
-------------

You should have finished the previous daily assignment, NumberProperties. If you
haven't got instructor approval, finish that one first. When you are ready, get
the instructor to approve your work and assign you to a programming pair for
today's daily.

To combine logical conditions in C++, we use the `&&` and `||` operators. Like logical `==`, these always appear doubled. Can you predict the output of the following code blocks?

```
int x = 4;
int name = "Nurl";

if (x == 4 || name == "Ken")
{
    cout << "Thumbs up!" << endl;
}
else
{
    cout << "Not this time." << endl;
}
```

```
int x = 4;
int name = "Quincy";

if (x == 4 && name = "Pam")
{
    cout << "Hey, " << name << "! I heard x is " << x << "." << endl;
}
else
{
    cout << "Oh, " << name << ", it's you. Have you seen Quincy?" << endl;
}
```

Instructions
------------

***Do not begin work without a partner. Work completed
outside of assigned pairs earns 0 credit.***

In today's assignment you will need to work in pairs. Each person in a pair is
either the "driver" or the "navigator" at any particular moment, but should
switch roles every few minutes. The driver works the computer while the navigator
suggests what to do, but the work should feel like a conversation.

### Exercise P3.6

Write a program that reads three numbers and prints "all the same" if they are all the same, "all different" if they are all different, and "neither" otherwise.

Sample output:
```
Enter three numbers separated by spaces: 4 -2 9
All different
```

Another sample:
```
Enter three numbers separated by spaces: 4 4 4
All the same
```

Yet another sample:
```
Enter three numbers separated by spaces: 4 -2 -2
Neither
```

### Exercise P3.7

Write a program that reads three numbers and prints "increasing" if they are in increasing order, "decreasing" if they are in decreasing order, and "neither" otherwise. Here, "increasing" means "strictly increasing", with each value larger than its predecessor. The sequence `3 4 4` would not be considered increasing.

Sample output:
```
Enter three numbers separated by spaces: 4 -2 -6
Decreasing
```

More sample:
```
Enter three numbers separated by spaces: 4 4 -6
Neither
```

More sample:
```
Enter three numbers separated by space: 1 5 9909
Increasing
```