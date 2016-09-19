Flowcharts
==========

***Due at 2:00 pm on September 20.***

Prerequisites
-------------

You should understand how `if` statements work, including all of the content
of sections 3.1 to 3.4 in Horstmann. You should also be able to find and fix
the *three* errors in the following code snippet. All of these common mistakes
are "legal" C++, but cause unexpected behavior.

Snippet 1.
```
if ((name = "Josue") && (day == "Monday");
{
    cout << "Hello, " << name << "! Happy " << day << "!" << endl;
}
```

Instructions
------------

Reviewing section 3.5 if necessary, and using the free tools at
(https://www.lucidchart.com/)[Lucidchart] if you like, devise
flowcharts for Programming Exercises 3.1 and 3.2 in Horstmann.

You do not need to write the code for the programs, just the
flowcharts. The sample output is included so that you can understand
exactly what the programs *would* do, *if you wrote them*.

The problems are reproduced here.

#### Exercise P3.1.
Write a program that reads a temperature value and the letter C
for Celsius or F for Fahrenheit. Print whether water is liquid, solid,
or gaseous at the given temperature (at sea level).

Sample output 1:
```
Enter a temperature in degrees C or degrees F: 22F
Water is solid at 22 degrees Fahrenheit.
```

Sample output 2:
```
Enter a temperature in degrees C or degrees F: 22C
Water is liquid at 22 degrees Celsius.
```

#### Exercise P3.2
The boiling point of water drops by about one degree Celsius for every 300
meters of altitude (or, about one degree Fahrenheit for every 500 feet).
Improve the program of Exercise P3.1 to allow the user to supply the altitude
in meters or feet.

Sample output 1:
```
Enter a temperature in degrees C or degrees F: 210F
Water is gaseous at 210 degrees Fahrenheit at 2500 feet above sea level.
```

Sample output 2:
```
Enter an altitude above sea level in feet or meters: 8500m
Water is gaseous at 93 degrees Celsius at 8500 meters above sea level.
```

Sample output 3:
```
Enter a temperature in degrees C or degrees F: 93C
Enter an altitude above sea level in feet or meters: 2500ft
Mixing metric and Imperial? Pick a system and stick with it!
```

Submitting your work
--------------------

Upload images of your flowcharts into your Daily 06 folder. Call
the files `p3.1-chart.jpg` and `p3.2-chart.jpg` (or `.png` or `.pdf`).

Files are due at 2:00 pm on September 20.
