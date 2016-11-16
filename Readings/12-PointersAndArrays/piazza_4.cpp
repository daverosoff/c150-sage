#include <iostream>

using namespace std;

int main()
{
  int a = 15;
  int* p = &a;
  int* q = &a;
  *p = *p + 10;
  cout << *q << endl;
}