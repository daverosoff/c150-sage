#include <iostream>

using namespace std;

int main()
{
    const double MM_PER_INCH = 25.4;
    const double INCH_PER_MM = 1/MM_PER_INCH;
    const double INCH_PER_M = 1000*INCH_PER_MM;
    const int INCH_PER_FOOT = 12;
    const int FOOT_PER_MILE = 5280;
    const int INCH_PER_MILE = INCH_PER_FOOT * FOOT_PER_MILE;

    cout << "Enter a distance in meters: ";
    double meters = 0;
    cin >> meters;
    double inches_frac = meters * INCH_PER_M;
    // int inches = inches_frac; // rounds down
    int inches = meters * INCH_PER_M; // rounds down
    inches_frac = inches_frac - inches; // now just the fractional inch
    int miles = inches / INCH_PER_MILE; // integer division
    inches = inches - miles * INCH_PER_MILE;
    int feet = inches / INCH_PER_FOOT; // integer division
    inches = inches - feet * INCH_PER_FOOT;
    cout << meters << " meters is equal to " << miles << " miles, ";
    cout << feet << " feet, and " << inches + inches_frac << " inches." << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}