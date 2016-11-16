#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> names = {"Homer", "Jay", "Simpson"}; // initializer list
    for (size_t i = 0; i < names.size(); i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    vector<int> primes = {};
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    primes.push_back(13);
    primes.push_back(17);
    for (size_t i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << " ";
    }
    cout << endl;
    primes.pop_back(); // deleted 17
    for (size_t i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << " ";
    }
    cout << endl;
    // how to get rid of element at position 2
    for (size_t i = 2; i < primes.size(); i++)
    {
        primes.at(i) = primes.at(i+1);
    }
    primes.pop_back();
    for (size_t i = 0; i < primes.size(); i++)
    {
        cout << primes.at(i) << " ";
    }

    cout << primes;

    cout << endl;


    return 0;
}