#include <iostream>

using namespace std;

int main()
{
    const int CENTS_PER_DOLLAR   = 100;
    const int CENTS_PER_QUARTER  = 25;
    const int CENTS_PER_DIME     = 10;
    const int CENTS_PER_NICKEL   = 5;

    cout << "Enter the purchase price in dollars and cents (e.g. 4.21): ";
    double price;
    cin >> price;
    cout << "Enter the amount received from the customer: ";
    double paid;
    cin >> paid;
    double change = paid - price;

    int dollars, quarters, dimes, nickels, pennies;
    // int cents = change * 100; // ERROR
    int cents = change * CENTS_PER_DOLLAR + 0.5;
    // cout << endl << "TRACE: cents is now " << cents << " and change is now " << change << endl;
    dollars = cents / CENTS_PER_DOLLAR;
    cents = cents % CENTS_PER_DOLLAR;
    quarters = cents / CENTS_PER_QUARTER;
    cents = cents % CENTS_PER_QUARTER;
    dimes = cents / CENTS_PER_DIME;
    cents = cents % CENTS_PER_DIME;
    nickels = cents / CENTS_PER_NICKEL;
    cents = cents % CENTS_PER_NICKEL;
    pennies = cents; // not strictly necessary... maybe it just felt good

    cout << "Your change is ";
    cout << dollars << " dollars, ";
    cout << quarters << " quarters, ";
    cout << dimes << " dimes, ";
    cout << nickels << " nickels, and ";
    cout << pennies << " pennies." << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}
