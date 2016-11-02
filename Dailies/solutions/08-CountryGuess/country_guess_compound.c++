#include <iostream>

using namespace std;

int main()
{
    cout << "Africa = 1, America = 2, Eurasia = 3, Oceania = 4. Which continent? ";
    int continent;
    cin >> continent;
    cout << "East = 1, West = 2. Which direction? ";
    int direction;
    cin >> direction;
    if (continent == 1 && direction == 1)
    {
        cout << "Kenya" << endl;
    }
    else if (continent == 1 && direction == 2)
    {
        cout << "Ghana" << endl;
    }
    else if (continent == 2 && direction == 1)
    {
        cout << "Brazil" << endl;
    }
    else if (continent == 2 && direction == 2)
    {
        cout << "" << endl;
    }
    else if (continent == 3 && direction == 1)
    {
        cout << "" << endl;
    }
    else if (continent == 3 && direction == 2)
    {
        cout << "" << endl;
    }
    else if (continent == 4 && direction == 1)
    {
        cout << "" << endl;
    }
    else if (continent == 4 && direction == 2)
    {
        cout << "" << endl;
    }

}