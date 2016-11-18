#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};
    vector<int> w = {2, 1};
    if (is_permutation(v.begin(), v.end(), w.begin()))
    {
        cout << "Yes, v is a permutation of w!" << endl;
    }
    return 0;
}