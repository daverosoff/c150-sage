#!/usr/bin/python

import subprocess
import os
from sys import exit
from tempfile import mkstemp

sourcefile = "reverse.c++"
exefile = "a.out"

if not os.path.isfile(sourcefile):
    print "No source file " + sourcefile + ", 0/10"
    exit()

if not os.path.isfile(exefile):
    try:
        print "compiling...\n"
        subprocess.check_call(["g++", "-o", exefile, sourcefile])
    except subprocess.CalledProcessError:
        print "Couldn't compile. 0/10"
        exit()

prompt = "Enter a word for me to reverse: "

def answer(word):
    return "The reverse of " + word + " is " + word[::-1] + ".\n"

def parse(ans):
    result = ans.strip("The reverse of ")
    result = result.split(" ")
    return result[0], result[2]

checks = {
    "t\n": prompt + answer("t"),
    "bn\n": prompt + answer("bn"),
    "ama\n": prompt + answer("ama"),
    "supernumerary\n": prompt + answer("supernumerary")
         }

passcount = 0
failcount = 0
for k, v in checks.iteritems():
    fi, tfn = mkstemp()
    t = os.fdopen(fi, "w")
    t.writelines([k])
    t.close()
    fo, sfn = mkstemp()
    s = os.fdopen(fo, "w")
    t = open(tfn, "r")
    subprocess.call(["./" + exefile], stdin=t, stdout=s)
    s.close()
    s = open(sfn, "r")
    result = s.read()
    print "Testing input " + k + "..."
    if not result.startswith(prompt):
        print "Prompt is incorrect... testing is not reliable until you fix it."
        continue
    if result != v:
        print "Expected output for input " + k + ", but not " + result.strip(prompt)
        failcount = failcount + 1
    else:
        print "Passed test for input " + k
        print result.strip(prompt)
        passcount = passcount + 1
    os.remove(tfn)
    os.remove(sfn)

if passcount + failcount != len(checks):
    print "Looks like you have some work to do before you can use the test script."
else:
    print "Passed " + str(passcount) + "/" + str(len(checks)) + " checks."
    print "Failed " + str(failcount) + "/" + str(len(checks)) + " checks."
    if passcount == len(checks):
        print "Good job, you are ready to submit this problem."
    else:
        print "Keep working until your program passes all the tests."

os.remove(exefile)
