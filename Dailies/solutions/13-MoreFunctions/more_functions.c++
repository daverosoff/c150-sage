// File more_functions.c++

#include "more_functions.h"

using namespace std;

string even(string st)
{
    size_t sz = st.length();
    result = "";
    for (size_t i = 0; i < sz; i += 2)
    {
        result += st[i];
    }
    return result;
}

int main()
{
    string my_best_friend = "Ferdinand";
    if (head(my_best_friend) == 'F') { cout << "head(): OK" << endl; }
    else { cout << "Something is wrong with head()!" << endl; }
    return 0;
}