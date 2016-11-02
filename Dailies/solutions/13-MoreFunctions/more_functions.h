#include <iostream>

using namespace std;

char head(string st)
{
    if (st != "") { return st[0]; } // st nonempty
    // can't return empty string "": type mismatch!
    // we HAVE to return a character
    else { return '\0'; } // st empty
}