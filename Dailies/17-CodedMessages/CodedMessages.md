Coded messages
==============

*(with acknowledgments to Prof. Granzow)*

Due: `encode.c++`, on Wednesday, November 30, at 2:00pm

For this assignment you are to write a program that writes and reads a file
with an encoded message.

Instructions
------------

1. Modify the program in `encode.c++` so that, instead of displaying the
   encoded message on the screen, the encoded message is written in a file
   named `secret.txt`.

2. (Bonus) Modify the program again so that, instead of immediately prompting
   the user for a message, it presents the user with a menu with two options:

        <<<< OPTIONS >>>>
        1: Encode a message and write it in `secret.txt`
        2: Decode the message in `secret.txt`
        Please enter an option (1-2):

   If the user enters option 1, they should be prompted to enter a message.
   The message that they enter should be encoded and written in `secret.txt`.

   If the user enters option 2, the program should read the encoded message in
   `secret.txt`, decode it, and display the decoded message on the screen.

   You can earn up to 10 bonus *homework* points to improve your *homework*
   grade.

Important NOTE
--------------

To read a message that includes white space (blank characters) you will need
to use `getline` (as is already done in `encode.c++`.) If you use `cin >>` 
to get the menu option input, you will need to to call
`cin.ignore()` before calling `getline(cin, user_input)`. I have found a
useful summary and discussion of these issues [august][here] as well as in our
textbook.

Submitting your work
--------------------

* `encode.c++` is due November 30 at 2:00 pm

[august]: http://www.augustcouncil.com/~tgibson/tutorial/iotips.html
