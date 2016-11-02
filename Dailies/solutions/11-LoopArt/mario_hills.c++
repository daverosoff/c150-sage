#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a positive integer height: ";
    int height;
    cin >> height;
    if (height <= 0)
    {
        cout << "Bad input! Terminating." << endl;
        return 1;
    }
    for (int i = 0; i < height; i++)
    {
        int space = height - 1 - i; // number of spaces before stars
        int stars = 1 + i;
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < stars; k++)
        {
            cout << "*";
        }
        cout << "  ";
        for (int k = 0; k < stars; k++)
        {
            cout << "*";
        }
        cout << endl;
        // space--;
    }
    return 0;
}