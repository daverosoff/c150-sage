#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a word: ";
    string word;
    cin >> word;
    cout << "Please enter a letter: ";
    string letter;
    cin >> letter;
    letter = letter[0];

    int count = 0;
    int sz = word.length();
    // string current;
    for (int i = 0; i < sz; i++)
    {
        // current = word[i];
        string current = word[i];
        if (current == letter) { count++; }
    }
    string time = " time";
    if (count == 1) { time = time + " "; }
    else { time = time + "s "; }

    cout << "The letter " << letter << "appears " << count << time;
    cout << "in the word " << word << endl;
}