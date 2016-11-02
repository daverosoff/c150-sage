#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int LOWER_EVEN = 88;
    const int UPPER_EVEN = 202;
    int even_sum = 0;
    int next_even = LOWER_EVEN;
    while (next_even <= 202)
    {
        even_sum = even_sum + next_even;
        next_even = next_even + 2;
    }
    return 0;
}
