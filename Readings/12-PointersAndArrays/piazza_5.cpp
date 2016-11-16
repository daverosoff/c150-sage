#include <iostream>

using namespace std;

int main()
{
  char ch1 = 'C';
  char* p = &ch1;
  char ch2 = *p;
  char* q = &ch2;
  *p = 'D';
  cout << *p << *q << endl;
}