#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(int argc, char* argv[])
{
  char filename[50];
  int lnstep=0;
  ifstream datafile;
  int charCount = 0;
  string linea;

  cout << "Please enter the file name: ";
  cin.getline(filename, 50);

  datafile.open(filename);
  while(getline(datafile,linea)){
      lnstep++;
      charCount += linea.length();
  }

std::cout << "There are " << charCount << " characteres in your document "<< '\n';
std::cout << "There are " << lnstep << " lines in your document "<< '\n';

datafile.close();

if(!datafile.is_open() ){
    exit(EXIT_FAILURE);
  }

    return 0;
}
