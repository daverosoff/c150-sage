import subprocess
import os
from sys import exit
# # import tempfile

if not os.path.isfile("ps01q1.c++"):
    print "No source file ps01q1.c++, 0/10"
    exit()

try:
    subprocess.check_call(["g++", "-o", "ps01q1", "ps01q1.c++"])
except subprocess.CalledProcessError:
    print "Couldn't compile. 0/10"
    exit()

correct_house = [ "/\\", "/  \\" , "+----+" , "| .-.|" , "| | ||" , "+-+-++" ]

# with tempfile.TemporaryFile() as outfile:
with open('tmp', 'w') as outfile:
    subprocess.call(["./ps01q1"], stdout=outfile)

error_lines = 0
with open('tmp', 'r') as infile:
    for line in infile:
        if line.strip() != correct_house.pop(0):
            error_lines = error_lines + 1
os.remove('tmp')

if error_lines:
    points = 10 - 2*error_lines
    print "Sorry, " + str(error_lines) + " lines of your house have errors in them. (" + str(points) + "/10)"
else:
    print "Nice house. (10/10)"
