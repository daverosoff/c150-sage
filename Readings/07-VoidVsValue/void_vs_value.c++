#include <iostream>

using namespace std;

string first_name_first(string first, string last)
{
    string result = first + " " + last;
    return result;
}

string last_name_first(string first, string last)
{
    string result = last + ", " + first;
    return result;
}

void both_name_formats(string first, string last, string& fnf, string& lnf)
{
    // fnf = first + " " + last;
    fnf = first_name_first(first, last);
    // lnf = last + ", " + first;
    lnf = last_name_first(first, last);
    // cout << fnf << endl;
    // cout << lnf << endl;
    return;
}

int add_one(int x)
{
    return x + 1;
}

void change_by_one(int& x)
{
    x = x + 1;
    return;
}

int main()
{
    string my_cool_firstname = "Blake";
    string my_cool_lastname = "Bortles";
    string st1;
    string st2;
    both_name_formats(my_cool_firstname, my_cool_lastname, st1, st2);
    cout << st1 << endl;
    cout << st2 << endl;

    int a = 5;
    change_by_one(a);
    cout << a << endl;

    return 0;
}