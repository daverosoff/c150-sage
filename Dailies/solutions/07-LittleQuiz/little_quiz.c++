#include <iostream>

using namespace std;

int main()
{
    string question1 = "Q1) What is the capital of Montana?\n\t\
1) Bozeman\n\t2) Billings\n\t3) Helena\n\n> ";
    string question2 = "Q2) Can you store the value \"cat\" in a variable of type int?\n\t\
1) yes\n\t2) no\n\n> ";
    string question3 = "Q3) What is the C++ value of the expression 9+8/4?\n\t\
1) 4\n\t2) 4.25\n\t3) 11\n\n> "

    int correct1 = 3;
    int correct2 = 2;
    int correct3 = 3;
    int score = 0;

    string wrong1 = "Sorry, the capital is Helena.";
    string wrong2 = "No, only numbers can go in ints.";
    string wrong3 = "Sorry, the answer is 11.";

    string correct = "Yes, that's right!";

    cout << "Are you ready for a quiz (y/n)? ";
    string do_quiz;
    cin >> do_quiz;
    if (!(do_quiz == "y" || do_quiz == "Y"))
    {
        cout << "Well, OK. Maybe next time." << endl;
        return 0;
    }
    cout << "OK, here it comes!\n\n";
    return 0;

    cout << question1;
    int student1;
    cin >> student1;

    if (student1 == correct1)
    {
        cout << "\n" + correct + "\n\n";
        score = score + 1;
    }
    else
    {
        cout << "\n" + wrong1 + "\n\n";
    }

    cout << question2;
    int student2;
    cin >> student2;

    if (student2 == correct2)
    {
        cout << "\n" + correct + "\n\n";
        score = score + 1;
    }
    else
    {
        cout << "\n" + wrong1 + "\n\n";
    }

    cout << question3;
    int student3;
    cin >> student3;

    if (student3 == correct3)
    {
        cout << "\n" + correct + "\n\n";
        score = score + 1;
    }
    else
    {
        cout << "\n" + wrong1 + "\n\n";
    }

    cout << "Overall, you got " + score + " out of 3 correct." << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}
