#include <iostream>
#include <cmath>
using namespace std;


int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int diff (int a, int b)
{
int d;
d=a-b;
return d;
}

int prod (int a, int b)
{
int p;
p=a*b;
return p;
}

int qout (int a, int b)
{
int q;
q=a/b;
return q;
}

int remain (int a, int b)
{
int w;
w=a%b;
return w;
}

int main ()
{
  int a;
  cout << "Please enter an integer value: ";
  cin >> a;

  int b;
  cout << "Please enter another integer value: ";
  cin >> b;

  cout << "Their sum is " << addition(a,b) << endl;
  cout << "The difference of your numbers is " << diff(a,b) <<'\n';
  cout << "The product of your numbers is " << prod(a,b)<< endl;
  cout << "Their int division is " << qout(a,b)<< endl;
  cout << "The remainder of int division is " << remain(a,b) << endl;

  return 0;
}
