#include<iostream>
using namespace std;

int main()
{

  int a, b;

  cout<<"Enter an integer: ";
  cin>>a;
  cout<<"Enter another integer: ";
  cin>>b;

  int total = 0;
  for (int x=a; x<=b; x++)
  {
          total += x;

  }

  cout<<"The sum of the integers between your numbers is "<< total << '\n';

  return 0;
}
