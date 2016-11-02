#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll(int faces)
{
    if (faces < 1) { return -1; }
    else
    {
        int result = 1 + rand() % faces;
        // cout << "Rolled a " << result << endl;
        return result;
    }
}

string time_str(int n)
{
    string result = (n == 1) ? "time" : "times";
    return result;
}

int main()
{
    srand(time(0));
    int roll1 = 0;
    int roll2 = 0;
    int roll3 = 0;
    int roll4 = 0;
    int roll5 = 0;
    int roll6 = 0;
    for (int i = 0; i < 6e7; i++)
    {
        int current_roll = roll(6);
        if (current_roll == 1) { roll1++; }
        else if (current_roll == 2) { roll2++; }
        else if (current_roll == 3) { roll3++; }
        else if (current_roll == 4) { roll4++; }
        else if (current_roll == 5) { roll5++; }
        else if (current_roll == 6) { roll6++; }
    }
    cout << "Results: " << endl;
    cout << "Rolled a 1: " << roll1 << " " + time_str(roll1) << endl;
    cout << "Rolled a 2: " << roll2 << " " + time_str(roll2) << endl;
    cout << "Rolled a 3: " << roll3 << " " + time_str(roll3) << endl;
    cout << "Rolled a 4: " << roll4 << " " + time_str(roll4) << endl;
    cout << "Rolled a 5: " << roll5 << " " + time_str(roll5) << endl;
    cout << "Rolled a 6: " << roll6 << " " + time_str(roll6) << endl;
    return 0;
}
