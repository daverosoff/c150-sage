#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a word for me to reverse: ";
    string my_word;
    cin >> my_word;
    cout << "The reverse of " << my_word << " is ";
    int pos = my_word.length() - 1;
    while (pos >= 0)
    {
        cout << my_word[pos];
        pos--;
    }
    cout << ".\n";
    return 0;
}