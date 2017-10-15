#include <iostream>
using namespace std;

int countChars(string str, char checkCharacter){
int count = 0;

for(char i = 0; i<str.size() ; ++i){
 if (str[i] == checkCharacter)
  ++count;
  }
 return count;
}

int main()
{

char checkCharacter;
string str;

  std::cout << "Please enter the character you want to count in your sentence: " << '\n';
  std::cin >> checkCharacter;

  std::cout << "Please enter a sentence skipping whitespaces: " << '\n';
std::cin >> str;


std::cout << "There are " << countChars(str,checkCharacter) << " " << checkCharacter << " in your sentence" << '\n';

    return 0;
}
