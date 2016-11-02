#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a positive integer side length: ";
    cin >> side;
    // print the top half
    int spaces = side - 1;
    int stars = 1;
    for (int i = 0; i < side; i++) // i is the number of lines already printed
    {
        for (int j = 0; j < spaces; j++)
        // j is the number of spaces printed on this line
        {
            cout << " ";
        }
        for (int k = 0; k < stars; k++)
        {
            cout << "*";
        }
        cout << endl;
        spaces = spaces - 1; // spaces--; is also ok
        stars = stars + 2; // stars += 2; is also ok
    }
    stars -= 4; // is same as stars = stars - 2;
    // print the bottom half
    for ()
    {
        
    }
    return 0;
}