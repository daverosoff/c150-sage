#include <iostream>

using namespace std;

double smallest(double x, double y, double z) // an unconventional approach
{
    double result = x;
    if (y < result)
    {
        result = y;
    }
    if (z < result)
    {
        result = z;
    }
    return result;
}
double average(double x, double y, double z)
{
    return (x + y + z) / 3;
}
bool all_the_same(int x, int y, int z) // what are the params?
{
    bool result = false;
    if (x == y && y == z) { result = true; }
    return result;
}
bool all_different(int x, int y, int z)
{
    bool result = true;
    if (x == y || y == z || z == x) { result = false; }
    return result;
}
bool sorted(double x, double y, double z)
{
    bool result = false;
    if (x <= y && y <= z) { result = true; }
    return result;
}
string middle(string st)
{
    size_t sz = st.length();
    string result;
    if (sz == 0) { result = ""; }
    else if (sz == 1) { result = st; }
    else
    {
        if (sz % 2 == 0) { result = st.substr(sz / 2 - 1, 2); }
        else { result = st.substr((sz - 1)/2, 1); }
    }
    return result;
}

string repeat(string st, int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += st;
    }
    return result;
}

bool is_vowel(char ch)
{
    bool result = false;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
    {
        result = true;
    }
    return result;
}

int count_vowels(string st)
{
    int count = 0;
    size_t sz = st.length();
    for (size_t i = 0; i < sz; i++)
    {
        if (is_vowel(st[i])) { count++; }
    }
    return count;
}

int count_words()
{
    int result = 0;
    if (str.length()==0) // the empty string
    {
        result = 0; // empty string has 0 words
    }
    else if (str.length()==1) // a single character
    {
        if (str.substr(0,1) == " ")
        {
            result = 0; // a space isn't a word
        }
        else
        {
            result = 1; // a one-letter word is 1 word
        }
    }
    else if (str.length()==2) // 2 characters
    {
        if (str.substr(0,1) != " " && str.substr(1,1) != " ")
        {
            result = 0; // no spaces, so 1 word
        }
        else
        {
            result = 1;
        }
    }
    else
    {
        string previous, current, next;
        int n = str.length();
        for (int i = 0; i < n-2; i++)
        {
            previous = str.substr(i,1);
            current = str.substr(i+1,1);
            next = str.substr(i+2,1);
            if (result == 0 && previous != " ")
            {
                result = 1;
            }
            if ( previous != " " && current == " " && next != " " )
            {
                result = result + 1;
            }
        }
    }
    return result;
}

int main()
{
    double sm1 = smallest(-2.0, 3, 0);
    double sm2 = smallest(3.0, -2, 0);
    double sm3 = smallest(3.0, 0, -2);
    if (sm1 == -2 && sm2 == -2 && sm3 == -2)
    {
        cout << "smallest(): OK" << endl;
    }
    else
    {
        cout << "Something is wrong with smallest()!" << endl;
    }

    double av = average(-2, 8, 0);
    if (av == 2)
    {
        cout << "average(): OK" << endl;
    }
    else
    {
        cout << "Something is wrong with average()!" << endl;
    }

    if (all_the_same(-2, -2, 3) || all_the_same(-2, 3, -2) || all_the_same(3, -2, -2))
    {
        cout << "Something is wrong with all_the_same()!" << endl;
    }
    else
    {
        cout << "all_the_same(): OK" << endl;
    }

    if (all_different(2,-3,-3) || all_different(-3,2,-3)
        || all_different(-3,-3,-3) || all_different(-3,-3,2))
    {
        cout << "Something is wrong with all_different()!" << endl;
    }
    else
    {
        cout << "all_different(): OK" << endl;
    }

    if (sorted(2, 4, 3) || sorted(4, 2, 3) || sorted(4, 3, 2)
        || sorted(3, 2, 4) || sorted(3, 4, 2))
    {
        cout << "Something is wrong with sorted()!" << endl;
    }
    else
    {
        cout << "sorted(): OK" << endl;
    }

    if (middle("odd") == "d" && middle("even") == "ve"
        && middle("") == "" && middle("x") == "x")
    {
        cout << "middle: OK" << endl;
    }
    else
    {
        cout << "Something is wrong with middle()!" << endl;
    }

    if (repeat("x", 2) == "xx" && repeat("Hi", 3) == "HiHiHi"
        && repeat("EmptyReps", 0) == "" && repeat("Once", 1) == "Once")
    {
        cout << "repeat(): OK" << endl;
    }
    else
    {
        cout << "Something is wrong with repeat()!" << endl;
    }

    if (count_vowels("x") == 0 && count_vowels("ax") == 1
        && count_vowels("xa") == 1 && count_vowels("yay") == 1
        && count_vowels("Marigolds eyes") == 5
        && count_vowels("Abstemiously, facetiously") == 12)
    {
        cout << "count_vowels(): OK" << endl;
    }
    else
    {
        cout << "Something is wrong with count_vowels()! (y is a vowel)" << endl;
    }

    if (count_words("") == 0 && count_words("Ein!") == 1
        && count_words("My purchases") == 2 )
    {
        if (count_words(" A subtle one to find") != 5)
        {
            cout << "There is a subtle error in count_words()." << endl;
        }
        else
        {
            cout << "count_words(): OK" << endl;
        }
    }
    else
    {
        cout << "Something is wrong with count_words()!" << endl;
    }
    return 0;
}
