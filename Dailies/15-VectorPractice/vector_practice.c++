#include <iostream>
#include <vector>

using namespace std;

/**
  * @param v a nonempty vector
  * @return  the smallest element of v
  */
int min(vector<int> v)
{
    int result = v[0]; // or v.at(0)
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] < result)
        {
            result = v[i];
        }
    }
    return result;
}

vector<int> sign(vector<int> v)
{
    vector<int> result;
    // return a vector of -1, 0, 1
    // use result.push_back()
    return result;
}

int num_pos(vector<int> v)
{
    // return number of positive entries in v
}

int main()
{
    // sample vectors
    vector<int> v1 = { 137, 2, -163, 51, 7 };
    vector<int> v2 = { 1, -163, -163, 1, 1 };
    vector<int> v3 = { 1 };
    // test min
    cout << min(v1) << endl; //should give -163
    cout << min(v2) << endl; //should give -163
    cout << min(v3) << endl; //should give -1
    return 0;
}
