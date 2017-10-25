#include <iostream>
#include <cmath>
using namespace std;


double sqrtt(double);

int main(){

int num;

std::cout << "Enter a number to calculate it´s square root " << '\n';
std::cin >> num;

double result = sqrtt(num);
//std::cout << result << '\n';
std::cout << "The square root of your number is " << result <<  '\n';


  return 0;
}

double sqrtt(double number){
  double error = .0001;
  double s = number;

  while ((s-number/s)>error){
    s = (s+ number/s)/2 ;
  }
  return s;
}
