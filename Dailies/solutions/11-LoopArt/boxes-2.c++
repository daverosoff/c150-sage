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

    for (int line = 0; line < side; line++)
    {
        if (line == 0 || line == side - 1) // are we in the first or last line?
        {
            for (int i = 0; i < 2 * side + 1; i++)
            {
                if (i < side || i > side) { cout << "*"; }
                else { cout << " "; }
            }
        }
        else
        {
            for (int i = 0; i < 2 * side + 1; i++)
            {
                if (i < side || i == side + 1 || i == 2 * side) { cout << "*"; }
                else { cout << " "; }
            }
        }
        cout << endl;
    }
    return 0;
}