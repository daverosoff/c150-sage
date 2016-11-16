#include <iostream>

using namespace std;

int main()
{
    int a = 641;
    int b = a;
    b++;
    cout << "a is still " << a << " but b is now " << b << "." << endl;

    // now use a pointer
    int  c = -163;
    int* d = NULL;
    d = &c; // d is a "pointer to int"; it "points to" c
    if (d != NULL) { (*d)++; } // we increment the value to which d points
    cout << "c is now " << c << " while d is " << *d << "." << endl;
    cout << "d itself is " << d << " and d + 1 is " << d + 1 << "." << endl;
    return 0;
}