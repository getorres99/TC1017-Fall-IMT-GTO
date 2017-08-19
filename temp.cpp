#include <iostream>
using namespace std;

int main ()
{
  int temp;
  cout << "Please enter a temperature value in F°: ";
  cin >> temp;

  cout << "That temperature in Celsius is " << 5*(temp-32)/9 << '\n';

  if (temp>212) { std::cout << "Water boils at that temperature" << '\n';
    /* code */
  } else {
    std::cout << "Water does not boil at that temperature" << '\n';
  }
  return 0;
}






//Write a program that will prompt the user for a temperature in Fahrenheit and then convert it to Celsius.
//You may recall that the formula is C = 5 ∗ (F − 32)/9.

//Modify the program to state whether or not water would boil at the temperature given.
// Your output might look like the following
