#include <iostream>
#include <cmath>
using namespace std;

double factorialrec(unsigned int n){
  if(n == 0){
    return 1;
  } else {
    return n * factorialrec(n-1);
  }
}

double calce(double precision){
double e=0;
double till;
int i=0;
do {
  till=e;
  e=e+1/factorialrec(i);
  i++;
} while (e-till>precision);
return e;
}


int main ()
{
double pres;
cout <<"Precision for calculate e (Write in format: .01 .1 .0001 for example)"<< endl;
cin>>pres;
std::cout << "The value of e with that precision is  " << calce(pres)<< '\n';
return 0;

}
