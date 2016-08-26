Hello, World!
=============

Every daily assignment for CSC-150 will look a lot like this one. This
section, <em>Prerequisites</em>, precedes the instructions and lets you assess
whether you are ready to complete the assignment. You should arrive in class
each day having completed the prerequisite activities.

### Equipment

* If you are going to use your own machine for homework, you need to bring it
  to class every day.
* You need to bring it with a fully charged battery.
* If you need to use the AC adapter, then you <alert>must</alert> bring an
  extension cord.

### Reading: The Command Line Interface

You are probably used to interacting with your computer through menus and
windows. These are the main parts of what is called a <em>graphical user
interface</em> or GUI. In thise course, we will make much more use of an older
kind of interface, a <em>command-line interface</em> or CLI. In a command-line
interface, you type your requests rather than selecting from a menu. There are
advantages and disadvantages to this setup. It requires you to remember the
names of the commands and their options, so it is less "user-friendly" than a
GUI. However, it is more versatile. Thus, after you get comfortable with it,
you will find it is much faster and more convenient. See the CLI reading (in
the Reading folder in the SMC course) for more details. You can read it now,
or skim it and refer back to it as necessary.

### Sign up for SageMathCloud

* You should have an email inviting you to our SageMathCloud course
  (<em>unless you are not enrolled</em>: see Rosoff in that case). Check your
  junk folder if you don't see it. You can follow the links there, or simply
  visit <a href="https://cloud.sagemath.com/">SageMathCloud</a> and create an
  account.
* You must use your <tt>@yotes.collegeofidaho.edu</tt> email address to sign
  up (not Facebook, Google, etc., and not any other email address).
* When you have finished creating your account, find the Projects button in
  the upper left corner of your SageMathCloud window and click it.
* Open our project and look around. You can create whatever files and folders
  you want, but be careful with deleting. You might not be able to get back a
  deleted file.

Programming Activity
====================

It's a time-honored tradition for beginning programmers to start with a
program like this one, that prints a polite greeting to the world. Follow
these directions to create yours. A computer follows directions more closely
than anyone, so we have to be very accurate.

### Instructions

* Use the New button in SageMathCloud (top left corner) to create a new file
  in this folder (don't worry, the instructions file you are looking at right
  now will stay open in its own tab). Name your new file
  <code>HelloWorld.cc</code>. <font color="red"><strong>Note: filenames are
  sensitive to capital letters, punctuation, and should never, ever contain
  spaces.</strong></font>
* To create your file, click where it says <code>File</code>, by the page
  icon.
* Type the code in the box below into your new file. Pay attention to
  punctuation, spelling, and spacing. Do *not* copy and paste. At this point,
  it's important for you to practice typing in code by hand.
* Professional Tip: always use Tab to indent. (Your editor is configured to
  insert four spaces whenever Tab is pressed.)
* Finally, pay attention while you type. Code editors behave a little
  differently from word processors.

Here is the code you should type into Sublime Text:

```
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    return 0;
}

```

When you are sure you have entered all the code correctly, including the blank
line at the end, save your file. (SageMathCloud actually saves your file
continually while you edit it, but you will feel better if you click the Save
button at this time.)

Now that your code is written, there is a step that uses the CLI (which is
also where you'll run your new program).

1. Find the New button in SageMathCloud. When you click, don't panic! Your
   file is still open in another tab.
2. Find the Terminal button and click it. After a brief wait, you should see a
   message that starts with "Welcome to the SageMathCloud Terminal
   Environment". "Terminal" is an interactive command line interface,
   sometimes called a "console".
3. Enter the command `g++ HelloWorld.cc -o HelloWorld` and hit Enter. This
   invokes our C++ *compiler* to translate your source code into machine
   instructions.
4. If you see an error message (any message is likely to be one, at this
   point), inspect your code for errors or typos and try again. If you are
   stuck, raise your hand and get some help.
5. If you just see another prompt, great! No news is good news from `g++`.
6. Run your program by typing `./HelloWorld` and hitting Enter.
7. Did you see the `Hello, world!` message you expected? If not, get some
   help.
8. Congratulations, you have written your first program!

Finish the assignment at home
=============================

You can see that the `cout` gizmo has something to do with printing text to the screen.