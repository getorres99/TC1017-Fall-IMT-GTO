#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  srand(time(NULL));
  int x,rp;
x = rand();
x = x % 100;
x = x + 1;

string name;
cout << "WELCOME, CAN YOU TELL ME YOUR NAME?" << '\n';
cin >> name;

std::cout << "" << '\n';
cout << "HELLO " << name << '\n';

do{
std::cout << "TRY TO GUESS A NUMBER (BETWEEN 0 and 100)" << '\n';
std::cout << "ENTER A NUMBER" << '\n';
std::cin >> rp ;
  if (x<rp) puts ("The secret number is lower");
  else if (x>rp) puts ("The secret number is higher");
} while (x!=rp);

puts ("Congratulations!");
return 0;

 }
