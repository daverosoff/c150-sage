#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a positive integer side length: ";
    int side;
    cin >> side;

    if (cin.fail() || side <= 0)
    {
        cout << "Bad input! Terminating." << endl;
        return 1;
    }

    for (int pos = 0; pos < side * (2 * side + 2); pos++)
    {
        if ( pos < side + 1 || pos > (side - 1) * (side + 1) ) // are we in the first or last line?
        {

        }
        else
        {
            for (int i = 0; i < side; i++) { cout << "*"; }
            cout << " ";
            for (int i = 0; i < side; i++)
            {
                if (i == 0 || i == side - 1) { cout << "*"; }
                else { cout << " "; }
            }
        }
        cout << endl;
    }
    return 0;
}