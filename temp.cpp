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

