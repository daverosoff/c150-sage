Your Bio and Schedule
=====================

**Due date: Tuesday, September 6, at 2:00pm**

<!-- MarkdownTOC -->

- [Prerequisites](#prerequisites)
- [Reading](#reading)
    - [Coding style: newlines and line length](#coding-style-newlines-and-line-length)
- [Programming Activity](#programming-activity)
    - [My Bio](#my-bio)
    - [Letter to myself](#letter-to-myself)
    - [Fall schedule](#fall-schedule)
- [Finish the assignment at home](#finish-the-assignment-at-home)
- [Submitting your work](#submitting-your-work)

<!-- /MarkdownTOC -->

<a name="prerequisites"></a>
Prerequisites
-------------

Before doing the reading and programming activity below, make sure the
answers to the following questions are "Yes". If not, you should think
about the previous assignment and get some help if you need to.

* Do you understand what `cout` and `endl` do, and how to use them?
* Can you use `cout` and `endl` to print this (including line breaks)?

```
"Ten" is three letters long,
but "three" is five letters long.
```

<a name="reading"></a>
Reading
-------

<a name="coding-style-newlines-and-line-length"></a>
### Coding style: newlines and line length

Everything in your computer is organized into files. A file is a sequence of
characters. Some files are programs and some are data. We'll have a lot more
to say about all this later, but for now this is enough. Every program or
recorded data that a program can use is some kind of file. The files are in
the computer, but you can't get them this way:

<img alt="A scene from the classic film Zoolander." src="watfg2.gif"
width="100%" />

Files that are made of readable text characters are called *text files*.
Readable text characters include letters, digits, punctuation... all the
characters you can type on a keyboard, spaces, and more besides. There are
some special invisible or "unprintable" characters that are important to
understand as well.

Look at any text file in your editor in SageMathCloud, like one of your source
code files or one of the `.md` instructions files. You can see the lines are
numbered. The numbers appear in the left-hand margin. A line that is too long
will wrap automatically (though most editors allow you to disable word wrap,
so that a long line runs right off the screen.) Type some really long lines
and notice how the numbers skip.

The numbers skip for a wrapped line because *the only thing that starts a new
line* is a special unprintable character called a *newline*. The editor may
show you a very long line as several lines on the screen, but the line numbers
tell you what is really happening. You type the newline character by hitting
the <kbd>Enter</kbd> key. In this way, you can manually re-wrap a long line by
putting some newlines in it. Watch the line numbers as you do this. Newlines
are part of a special class of characters called *whitespace*. Other
whitespace characters are spaces and tabs.

It's important to write your code in a clean, readable style. Part of that
style is having lines that are not too long. In the SageMathCloud editor,
lines wrap at 80 characters (unless you changed the font size) or the edge of
the window, whichever is sooner. 80 characters is a traditional upper limit on
the length of a line, and you should get in the habit of making sure your
lines are not longer than this. Then your code will be readable on any
display, no matter how the editor's options are configured or what font size
is in use.

**Professional Tip:** Use <kbd>Alt+q</kbd> (try <kbd>Option+q</kbd> on
Mac—let Rosoff know if that's not the right shortcut) to re-wrap whatever
paragraph your cursor is in. You might need to hit it more than once. You can
use this to wrap a single very long line into several lines of the appropriate
length.

<a name="programming-activity"></a>
Programming Activity
--------------------

<a name="my-bio"></a>
### My Bio

1. Write a program in the file [my_bio.c++](my_bio.c++) that prints a bio to the
   screen. Here is an example to copy, but yours should be about you.

        Name:      Dr. Rosoff
        Age:       36 years old
        Hometown:  Albuquerque, New Mexico
	What I am looking forward to about CSC-150: This semester I think my
	more coherent philosophy of CS teaching along with our cloud computing
	strategy will make for a really good course experience. I'm looking
	forward to finding out!
	What I am not looking forward to about CSC-150: There are usually one
	or two people who get complacent during the first few weeks and check
	out of what seems like a boring, easy class. They don't often do so
	well for the rest of the semester.
        Interests: Outside of work, I spend a lot of time reading and thinking
        about math, computer science, and programming. When I'm not doing that
        I enjoy reading novels, cooking, music, video games, and spending time
        with my family. This is my 6th year at The College of Idaho.

2. When you are done with your bio, have the instructor take a look at your
   code just to check.

3. Compile your code and make sure the output is correct and lines up neatly
   like the example. Remember the steps to compile `my_bio.c++`:

   a. Open a Terminal from the folder where `my_bio.c++` lives.

   b. Run the command `g++ -o my_bio my_bio.c++`. If there are errors, check
      your code for mistakes. If not, go on.

   c. Run `./my_bio` to run your program and see its output.

<a name="letter-to-myself"></a>
### Letter to myself

1. ([Graham Mitchell](http://programmingbydoing.com/a/letter-to-
   yourself.html)) In the file `letter.c++`, write a program to
   print an envelope addressed to you. Maybe it has
   a big, fat check in it. We could go out for tacos. And get guac!
   You don't have to use your real address, but
   you do have to have a 3-line address and a stamp.

        +--------------------------------------------------------------------------+
        |                                                                          |
        |                                                                    ##### |
        |                                                                    ##### |
        |                                                                    ##### |
        |                                                                          |
        |                                                                          |
        |                                           Dave Rosoff                    |
        |                                           123 Fake St.                   |
        |                                           Locationville, ID 83700        |
        |                                                                          |
        +--------------------------------------------------------------------------+

<a name="fall-schedule"></a>
### Fall schedule

1. Write a program `fall_schedule.c++` that prints your course schedule.
   Here's mine. Yours should line up in a similar way.

                                                   Dave Rosoff Fall 2016 Schedule
        Course No.  Course Name              Days    Time                Location
        -------------------------------------------------------------------------
           MAT-275  Multivariable Calculus   MTW F   08:00-09:00        Boone 132
           CSC-150  Computer Science 1       MTW F   10:20-11:20        Boone 104
           MAT-150  Applied Calculus         MTW F   01:00-02:00        Boone 106
           MAT-199  Math-Physics Colloquium     R    01:00-02:00        Boone 101
	   XXXXXXX  Faculty meetings            R    11:30-12:30           Varies
           XXXXXXX  Faculty meetings          T      11:30-12:30    Langroise 204    

<a name="finish-the-assignment-at-home"></a>
Finish the assignment at home
-----------------------------

There's no particular at-home component except to finish up what you didn't
have time for during class.

<a name="submitting-your-work"></a>
Submitting your work
--------------------

This assignment is due **Tuesday, September 6, at 2:00 pm**. The files I will
grade are:

* [`my_bio.c++`](#my-bio)
* [`letter.c++`](#letter-to-myself)
* [`schedule.c++`](#fall-schedule)

Make sure you put these files in the `ComputerScience1/Dailies/01-YourBioAndSchedule`
directory on SageMathCloud. If they are anywhere else I won't see them.
