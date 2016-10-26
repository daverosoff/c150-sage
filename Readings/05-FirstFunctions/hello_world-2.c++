#include <iostream>

using namespace std;

string get_name() // this function returns a string
{
    cout << "Hello, friend. What is your name? Type it in here: ";
    string moniker;
    cin >> moniker;
    return moniker;
}

void greet_user(string handle) // this function should print the greeting
{
    cout << "Hello, " << handle << "!" << endl;
    // cout << "Hello, " << moniker << "!" << endl; // ERROR
    return;
}

int main()
{
    string user_name = get_name();
    greet_user(user_name);
    return 0;
}