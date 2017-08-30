#include<iostream>
using namespace std;

int main()
{

  int num1, num2;

  cout<<"Enter an integer: ";
  cin>>num1;
  cout<<"Enter another integer: ";
  cin>>num2;

  int total = 0;
  for (int x=num1; x<=num2; x++)
  {
          total += x;

  }

  cout<<"The sum of the integers between the two numbers is "<< total;

  return 0;
}
