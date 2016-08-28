In this course, you will learn to interact with the computer via what is
called a *command line interface* or CLI. A command line interface is the
oldest visual interface, but most computer users today exclusively use
graphical user interfaces (GUIs). In a GUI, you typically interact with
programs through menus and a windowing system with lots of mousework. In a
CLI, you type the commands you want to execute, in the order you want them
executed—just like writing a program!

Since all modern operating systems (GNU/Linux, Windows, OS X) employ GUIs, you
will use a windowed application, called a *terminal*, to reach the CLI. This
terminal window is how you will interact with the programming environment. How
you get to a terminal window depends on your setup.

If you are logged into your SageMathCloud account, you can create a terminal
window just like any other file. In fact, they are files. So you can move
them, rename them, delete them, and so on.

Initially, you are presented with a *prompt*, which looks something like this:

<pre class="console"><span class="prompt unselectable">dave@zeno:~$ </span><b>
</b>
</pre>

There is a little bit of information presented here, but for now, the only
thing you need to worry about is the $ sign followed by the flashing cursor.
The CLI is waiting for  your command. At the prompt, you can enter a single
line: a bunch of text, followed by a stroke of the <kbd>Enter</kbd> key. The
<kbd>Enter</kbd> key signals the CLI that you are done with your command and
the CLI will then *execute* it.

What you see after pressing <kbd>Enter</kbd> depends on the command you typed.

<pre class="console"><span class="prompt unselectable">dave@zeno:~$ </span><b>ls # This is a small letter L, not a 1
</b>another-file some-file
</pre>

The command <tt>ls</tt> stands for *list* and it lists all the files in the
working directory. Here we see there are two files.

Often, if everything goes correctly, you see nothing at all ("no news is
good news"):

<pre class="console"><span class="prompt unselectable">dave@zeno:~$ </span><b>echo "Hello, file!" &gt; test-file
</b>
<span class="prompt unselectable">dave@zeno:~$</span><b>
</b></pre>

The command places the quoted string "Hello, file!" into the file named
<tt>test-file</tt>, but no message is shown to that effect. This will seem
strange if you are used to always seeing success messages when things work.

If your command is not correct, or if its action is not simple, you will see some *output* in the terminal window. Many commands also have "verbose" options to force them to be more, well, verbose.

<pre class="console"><span class="prompt unselectable">dave@zeno:~$ </span><b>remove test-file
</b>remove: command not found
<span class="prompt unselectable">dave@zeno:~$ </span><b>rm -v test-file
</b>removed 'test-file'
</pre>

Be careful with <tt>rm</tt>. There's no undelete capability here. When you
delete a file, it's just gone.

Each time you see the prompt, it is a chance to enter a command. Your commands
will do things in a certain order. When you see output, inspect it to see if
there are errors. Otherwise, it is telling you how to set up for the next
command. As you've seen, commands can perform some familiar actions, like
creating, editng, or deleting files. They can also open programs (even ones
that run in windows) or run them from the command line while you wait.
