#include "roll_die.h"

using namespace std;

int main()
{
    int wrong100 = 0;
    int wrong10 = 0;
    int wrong1 = 0;
    int wrongminus1 = 0;
    for (int i = 0; i < 1e6; i++)
    {
        int a = roll_die(100);
        int b = roll_die(10);
        int c = roll_die(1);
        int d = roll_die(-1);
        if (a < 1 or a > 100) { wrong100++; }
        if (b < 1 or b > 10) { wrong10++; }
        if (c < 1 or c > 1) { wrong1++; }
        if (d != -1) { wrongminus1++; }
    }
    if (wrong100 > 0 or wrong10 > 0 or wrong1 > 0 or wrongminus1 > 0)
    {
        cout << "Something is wrong!" << endl;
    }
    else
    {
        // cout << "Looks good... get the instructor to look over your work."; << endl; // ERROR
        cout << "Looks good... get the instructor to look over your work." << endl; 
    }
    return 0;
}
