#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    cout << "List of numbers" << endl;
    for (int i = 0; i < 12; ++i)
    {
        cout << "number " << setw(2) << i << ":  " << number[i] << endl;
    }

    cout << "\n number   :  " << number;
        cout << "\n&number   :  " << &number;
        cout << "\n&number[0]:  " << &number[0] << endl;

    cout << "An integer occupies " << sizeof(int) << " bytes\n";
    cout << "\n number:    " << number;
    cout << "\n&number[0]: " << &number[0] << endl;
    cout << "\n number+1:  " << number+1;
    cout << "\n&number:[1] " << &number[1] << endl;
    cout << "\n number+2:  " << number+2;
    cout << "\n&number:[2] " << &number[2] << endl;

    int* pnumbers = number;

    cout << "\nAddresses";
    cout << "\n number  :  " << number;
    cout << "\npnumbers :  " << pnumbers;

    cout << "\n\nValues";
    cout << "\n number [0] :  " << number[0];
    cout << "\npnumbers[0] :  " << pnumbers[0];
    cout << "\n number [1] :  " << number[1];
    cout << "\npnumbers[1] :  " << pnumbers[1];

    cout << "\nAddresses";
    cout << "\n number    :  " << number;
    cout << "\npnumbers   :  " << pnumbers;
    cout << "\n number +1 :  " << number+1;
    cout << "\npnumbers+1 :  " << pnumbers+1; 
    cout << "\n number +2 :  " << number+2;
    cout << "\npnumbers+2 :  " << pnumbers+2;

    cout << "\nValues - Using the Array";
    cout << "\n number[0]:    " << number[0];
    cout << "\n number[1]:    " << number[1];
    cout << "\n number[2]:    " << number[2];
    cout << "\n number[3]:    " << number[3];
    cout << "\n number[4]:    " << number[4];

    cout << "\n\nValues - Using the Pointer - No Parentheses";
    cout << "\n*pnumbers:     " << *pnumbers;
    cout << "\n*pnumbers+1:   " << *pnumbers+1;
    cout << "\n*pnumbers+2:   " << *pnumbers+2;
    cout << "\n*pnumbers+3:   " << *pnumbers+3;
    cout << "\n*pnumbers+4:   " << *pnumbers+4;

    cout << "\n\nValues - Using the Pointer - With Parentheses";
    cout << "\n*pnumbers:     " << *pnumbers;
    cout << "\n*(pnumbers+1): " << *(pnumbers+1);
    cout << "\n*(pnumbers+2): " << *(pnumbers+2);
    cout << "\n*(pnumbers+3): " << *(pnumbers+3);
    cout << "\n*(pnumbers+4): " << *(pnumbers+4);

    int size_of_array = sizeof(number)/sizeof(int);
    cout << "List of numbers:";
    for (int i = 0; i < size_of_array; i++)
    {
        cout << "\nnumber " << i + 1 << ": " << *(pnumbers+i);
    }
    return 0;
}