#include <iostream>
#include <vector>

using namespace std;

// This function returns a vector of counts
// in the order a, e, i, o, u, y.
vector<int> count_vowels(string st)
{
    vector<int> result = {0, 0, 0, 0, 0, 0}; // there's a better way... next time
    for (size_t i = 0; i < st.length(); i++)
    {
        if      (st[i] == 'a') { result[0]++; }
        else if (st[i] == 'e') { result[1]++; }
        else if (st[i] == 'i') { result[2]++; }
        else if (st[i] == 'o') { result[3]++; }
        else if (st[i] == 'u') { result[4]++; }
        else if (st[i] == 'y') { result[5]++; }
    }
    return result;
}

int main()
{
    string nemesis = "licalzi";
    vector<int> counts = count_vowels(nemesis);
    for (size_t i = 0; i < counts.size(); i++)
    {
        cout << counts[i] << " ";
    }
    cout << endl;
    return 0;
}