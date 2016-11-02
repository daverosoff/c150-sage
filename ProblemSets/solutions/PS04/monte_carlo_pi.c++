#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

double random_real()
{
    double r = rand() % 2000000;
    r -= 1e6;
    r /= 1e6;
    return r;
}

void random_point(double& x, double& y)
{
    x = random_real();
    y = random_real();
    return;
}

bool is_in_circle(double x, double y)
{
    double r = x*x + y*y;
    return r <= 1;
}

int main()
{
    srand(time(0));
    int count = 0;
    const int POINTS = 2e9;
    for (int i = 0; i < POINTS; i++)
    {
        double x;
        double y;
        random_point(x, y);
        if (is_in_circle(x, y))
        {
            count++;
        }
    }
    cout << count << " of " << POINTS << " points were in the circle." << endl;
    cout << "Hence the circle's area is " << double(count)/POINTS;
    cout << " times that of the square, or " << 4 * double(count)/POINTS;
    cout << "." << endl;
    return 0;
}
