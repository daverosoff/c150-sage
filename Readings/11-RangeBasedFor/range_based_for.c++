#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> salaries = { 51, 63, 22, 83, 91 };
    vector<string> firstnames = { "Alice", "Ben", "Carol", "Dirk", "Egbert" };

    for (string person : firstnames) //range-based loop
    {
        cout << "Hello " << person << "!" << endl;
    }
    for (int s : salaries)
    {
        cout << "Entry in salaries: " << s << endl;
    }

    return 0;
}