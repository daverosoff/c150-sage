#include <iostream>

using namespace std;

double smallest(double x, double y, double z)
{
    // what should we return?
    // how do we compute it?
}
double average(double x, double y, double z)
{
    // what should we return?
    // how do we compute it?
}
bool all_the_same() // what are the params?
{
    // what should we return?
    // how do we compute it?
}
bool all_different()
{

}
bool sorted()
{

}
string middle()
{

}

string repeat()
{

}

int count_vowels()
{

}

int count_words()
{

}

int main()
{
    double sm1 = smallest(-2.0, 3, 0);
    double sm2 = smallest(3.0, -2, 0);
    double sm3 = smallest(3.0, 0, -2);
    if (sm1 == -2 && sm2 == -2 && sm3 == 0)
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
        && count_vowels("xa" == 1) && count_vowels("yay") == 1
        && count_vowels("Marigolds eyes") == 5
        && count_vowels("Abstemiously, facetiously") == 10)
    {
        cout << "count_vowels(): OK" << endl;
    }
    else
    {
        cout << "Something is wrong with count_vowels()!" << endl;
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
