#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // int a = 1000;
    // cout << "Commencing countdown: ";
    // while (a > 0)
    // {
    //     cout << a << ", " << endl;
    //     a = a - 1;
    // }
    // cout << "blast off!" << endl;

    int top = 34;
    int bottom = 15;
    int square_total = 0;
    int next_number = bottom;
    while (next_number <= 34)
    {
        square_total = square_total + next_number * next_number;
        next_number = next_number + 1;
    }
    cout << square_total << endl;

    int low_power = 1;
    int high_power = 20;
    int current_power = low_power;
    int power_total = 0;
    while (current_power <= 20)
    {
        power_total = power_total + pow(2, current_power);
        current_power = current_power + 1;
    }
    return 0;
}