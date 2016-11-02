import subprocess
import os
from sys import exit
# # import tempfile

sourcefile = "ps01q3.c++"
exefile = sourcefile.replace(".c++", "");

if not os.path.isfile(sourcefile):
    print "No source file " + sourcefile + ", 0/10"
    exit()

if not os.path.isfile(exefile):
    try:
        subprocess.check_call(["g++", "-o", exefile, sourcefile])
    except subprocess.CalledProcessError:
        print "Couldn't compile. 0/10"
        exit()

with open('tmp1', 'w') as infile:
    infile.writelines(["0.01 1"])
with open('tmp2', 'w') as infile:
    infile.writelines(["8.59 10"])
with open('tmp3', 'w') as infile:
    infile.writelines(["29.17 50"])

with open('tmp', 'a') as outfile:
    with open('tmp1', 'r') as infile:
        subprocess.call(["./" + exefile], stdin=infile, stdout=outfile)
    with open('tmp2', 'r') as infile:
        subprocess.call(["./" + exefile], stdin=infile, stdout=outfile)
    with open('tmp3', 'r') as infile:
        subprocess.call(["./" + exefile], stdin=infile, stdout=outfile)
