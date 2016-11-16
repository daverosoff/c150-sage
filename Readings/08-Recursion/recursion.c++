#include <iostream>

using namespace std;

long factorial_recursive(long n)
{
    if (n == 0) { return 1; }
    else
    {
        long result = n*factorial_recursive(n-1);
        return result;
    }
}

long factorial_iterative(long n)
{
    long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i; // result = result * i;
    }
    return result;
}

string middle(string st)
{
    if (st.length() <= 2)
    {
        return st;
    }
    else
    {
        return middle(st.substr(1, st.length()-2));
    }
}

int main()
{
    // cout << "recursive: " << factorial_recursive(50) << endl;
    cout << "iterative: " << factorial_iterative(50) << endl;
    return 0;
}