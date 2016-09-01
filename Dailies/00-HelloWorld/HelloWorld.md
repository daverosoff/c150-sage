Hello, World!
=============

**Due date: Friday, September 2, at 2:00 pm**

Every daily assignment for CSC-150 will look a lot like this one. This
section, <em>Prerequisites</em>, precedes the instructions and lets you assess
whether you are ready to complete the assignment. You should arrive in class
each day having completed the prerequisite activities.

<!-- MarkdownTOC -->

- [Prerequisites](#prerequisites)
    - [Equipment](#equipment)
    - [Reading: The Command Line Interface](#reading-the-command-line-interface)
    - [Sign up for SageMathCloud](#sign-up-for-sagemathcloud)
- [Programming Activity](#programming-activity)
    - [Instructions](#instructions)
- [Finish the assignment at home](#finish-the-assignment-at-home)
- [Submitting your work](#submitting-your-work)

<!-- /MarkdownTOC -->


<a name="prerequisites"></a>
Prerequisites
-------------

<a name="equipment"></a>
### Equipment

* If you are going to use your own machine for homework, you need to bring it
  to class every day.
* You need to bring it with a fully charged battery.
* If you need to use the AC adapter, then you <alert>must</alert> bring an
  extension cord.

<a name="reading-the-command-line-interface"></a>
### Reading: The Command Line Interface

You are probably used to interacting with your computer through menus and
windows. These are the main parts of what is called a <em>graphical user
interface</em> or GUI. In thise course, we will make much more use of an older
kind of interface, a <em>command-line interface</em> or CLI. In a command-line
interface, you type your requests rather than selecting from a menu. There are
advantages and disadvantages to this setup. It requires you to remember the
names of the commands and their options, so it is less "user-friendly" than a
GUI. However, it is more versatile. Thus, after you get comfortable with it,
you will find it is much faster and more convenient. See [the CLI reading in
the Reading folder in the SMC course](../../Readings/01-CLI/CLI.md) for more
details. You can read it now, or skim it and refer back to it as necessary.

<a name="sign-up-for-sagemathcloud"></a>
### Sign up for SageMathCloud

* You should have an email inviting you to our SageMathCloud course
  (<em>unless you are not enrolled</em>: see Rosoff in that case). Check your
  junk folder if you don't see it. You can follow the links there, or simply
  visit <a href-"https://cloud.sagemath.com/">SageMathCloud</a> and create an
  account.
* You must use your <tt>@yotes.collegeofidaho.edu</tt> email address to sign
  up (not Facebook, Google, etc., and not any other email address).
* When you have finished creating your account, find the Projects button in
  the upper left corner of your SageMathCloud window and click it.
* Open our project and look around. You can create whatever files and folders
  you want, but be careful with deleting. You might not be able to get back a
  deleted file.

<a name="programming-activity"></a>
Programming Activity
--------------------

It's a time-honored tradition for beginning programmers to start with a
program like this one, that prints a polite greeting to the world. Follow
these directions to create yours. A computer follows directions more closely
than anyone, so we have to be very accurate.

<a name="instructions"></a>
### Instructions

* Open your `ComputerScience1` SageMathCloud project and navigate to the
  folder `Dailies/00-HelloWorld`. Open the file `hello_world.c++`. <font
  color-"red"><strong>Note: filenames are sensitive to capital letters,
  punctuation, and should never, ever contain spaces.</strong></font>
* Don't panic, the file is supposed to be empty. You are about to fill it.
* Type the code in the box below into your new file. Pay attention to
  punctuation, spelling, and spacing. Do *not* copy and paste. At this point,
  it's important for you to practice typing in code by hand.
* Professional Tip: always use Tab to indent. (Your editor is configured to
  insert four spaces whenever Tab is pressed.)
* Finally, pay attention while you type. Code editors behave a little
  differently from word processors. You can customize your editor's behavior
  in your SageMathCloud user settings (gear menu, not wrench).

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
3. Type `ls` (that's a lowercase ell, not a number 1) and hit <kbd>Enter</kbd> to see a
   list of files.
4. Type `g++ -o hello_world hello_world.c++` and hit <kbd>Enter</kbd>. This
   invokes our C++ *compiler* to translate your source code into machine
   instructions.
5. If you see an error message (any message is likely to be one, at this
   point), inspect your code for errors or typos and try again. If you are
   stuck, raise your hand and get some help.
6. Run `ls` again and compare. You should see a new file named `hello_world`
   (no extension).
7. Run your program by typing `./hello_world` and hitting <kbd>Enter</kbd>.
8. If you just see another prompt, great! No news is good news from `g++`.
9. Did you see the `Hello, world!` message you expected? If not, get some
   help.
10. Congratulations, you have written your first program!

<a name="finish-the-assignment-at-home"></a>
Finish the assignment at home
-----------------------------

You can see that the `cout` gizmo has something to do with printing text to
the screen. You can pass `cout` more than one thing at a time.

1. Make a copy of your `hello_world.c++` file and call it `hello_world2.c++`.
2. Replace the original `cout` statement with this one:
```
cout << "Hello, " << "world!" << endl;
```
3. Remember to pay attention to the spacing. A big percentage of skill in
   programming has to do with being able to quickly spot small differences in
   text: like a missing or extra space.
4. Add another line right after your `cout` statement like this:
```
cout << "My name is " << "Banksy." << endl; // but put your name instead
```
5. The text including and after the `//` is a C++ *comment*. Comments are
   ignored by the compiler `g++` and are essential for documenting your work.
   You'll write lots of comments later, but don't worry about making them now.
6. Make sure your `hello_world2.c++` file is saved. Compile and run it to check
   that it's working properly.

When you surround text with quotation marks `"` in a C++ program, the
resulting gizmo is called a *string*. You have passed strings to `cout`
already, but you can pass it numbers too—without any quotation marks. Make a
copy of `hello_world.c++` that contains a statement like this. Call the new
file `hello_world3.c++` and see if you can guess what will happen when you
compile it.
```
cout << "I have " << 4 << " kitties!" << endl;
```
Was your guess right? Try to see why or why not.

You have probably anticipated that programming is about more than printing
silly sentences to the screen, although silly messages never really stop being
entertaining. At its heart, a computer performs *computations*. So now try a
statement like this one.
```
cout << "I have " << 7*13 << " socks!" << endl; // What will happen? Exciting!
```
The operations of arithmetic, like `+`, `*`, `-`, are built-in, but fancier math
functions have to be imported from elsewhere, like caviar or grappa.

1. Change your `hello_world3.c++` program so that it looks like the source code
   displayed below. Again, you should type all the code in by hand instead of
   copy and pasting.

```
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    cout << "I like producing output." << endl;
    cout << "I also read fish newspapers." << endl;
    cout << "You could say this is \"nonsense\", but why bother?" << endl;
    cout << "Welp, bye!" << endl;
    return 0;
}
```

2. What do you think the `\` characters ("backslashes") do?
3. Compile and run this program to make sure it's working properly.

<a name="submitting-your-work"></a>
Submitting your work
--------------------

The best thing about SageMathCloud for homework is that you don't have to turn it
in! When you're done, just relax. I will collect it on the due date, grade it,
and return it with comments. So all you need to do is make sure the files I will
be grading are ready to go by the due date.

The files due on Friday, September 2, at 2:00 pm are:

* `hello_world.c++`
* `hello_world2.c++`
* `hello_world3.c++`
