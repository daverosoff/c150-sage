#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a positive integer side length: ";
    int side;
    cin >> side;

    int stars = 1;
    int spaces = side - 1;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        stars += 2;
        spaces--;
    }
    stars -= 2;
    spaces++;
    for (int i = 0; i < side - 1; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        stars -= 2;
        spaces++;
    }
    return 0;
}