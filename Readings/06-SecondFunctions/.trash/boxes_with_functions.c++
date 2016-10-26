#include <iostream>

using namespace std;

void print_edge(int s)
{
    for (int j = 0; j < s; j++) //print left half
    {
        cout << "*";
    }
    cout << " ";                   //print middle space
    for (int j = 0; j < s; j++) //print right half
    {
        cout << "*";
    }
    cout << endl;
    return;
}

void print_middle(int s)
{
    for (int j = 0; j < s; j++) //print left half
    {
        cout << "*";
    }
    cout << " ";                   //print middle space
    for (int j = 0; j < s; j++) //print right half
    {
        if (j == 0 || j == s - 1)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
    return;
}

int main()
{
    cout << "Enter an integer side length: ";
    int side;
    cin >> side;

    if (side != 1)
    {
        print_edge(side);
        for (int i = 0; i < side - 2; i++)
        {
            print_middle(side);
        }
        print_edge(side);
    }
    else
    {
        cout << "* *\n";
    }
    return 0;
}