#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a greeting: ";
    string greeting;
    getline(cin, greeting); // get a newline-terminated string
    // int position = greeting.length() - 1;
    cout << "Your greeting, forward: ";
    int position_forward = 0;
    while (position_forward < greeting.length())
    {
        cout << greeting[position_forward];
        position_forward = position_forward + 1;
    }
    cout << endl;

    cout << "Your greeting, reversed: ";
    int position_reverse = greeting.length() - 1;
    while (position_reverse > -1)
    {
        cout << greeting[position_reverse];
        position_reverse = position_reverse - 1;
    }
    cout << endl;

    cout << "Your greeting, with all characters shifted forward by 1: ";
    int position_change_characters = 0;
    string greeting_copy = greeting;
    while (position_change_characters < greeting.length())
    {
        greeting_copy[position_change_characters] =
            greeting_copy[position_change_characters] + 1;
        position_change_characters++;
    }
    cout << greeting_copy << endl;
    return 0;
}