#include <iostream>
#include <cstdlib> // provides srand() and rand()
#include <ctime>   // provides time()

using namespace std;

int main()
{
    srand(time(0)); //do this exactly once!!
    // cout << time(0) << endl;
    int x = rand() % 100; // between 0 and 99 inclusive
    int y = 1 + rand() % 100; // between 1 and 100 inclusive
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;

    int z1 = 1 + rand() % 6;
    int z2 = 1 + rand() % 6;
    int z3 = 1 + rand() % 6;
    int z4 = 1 + rand() % 6;
    int z5 = 1 + rand() % 6;

    cout << "z1 is: " << z1 << endl;
    cout << "z2 is: " << z2 << endl;
    cout << "z3 is: " << z3 << endl;
    cout << "z4 is: " << z4 << endl;
    cout << "z5 is: " << z5 << endl;

    return 0;
}
