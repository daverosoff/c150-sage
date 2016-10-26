#include <iostream>

using namespace std;

string get_name() // this function returns a string
{
    cout << "Hello, friend. What is your name? Type it in here: ";
    string moniker;
    cin >> moniker;
    return moniker;
}

int main()
{
    string user_name = get_name();
    cout << "Hello, " << user_name << "!" << endl;
    // cout << "Hello, " << moniker << "!" << endl; // ERROR
    return 0;
}