#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countbanas(string filename){
  string line;
  int bananacount=0;
  int l=0;

  ifstream file(filename.c_str());
  cout << "Write the word you're looking for:\n" ;
  string word ;
  cin >> word ;

    if (file.is_open() ){

      while(getline(file, line)){
        for (int i=0;i<=line.size();i++){
          line[i]= tolower(line[i]);
        }
        l = line.find(word);
        while (l>=0) {
          bananacount +=1;
          l = line.find(word,l+6);
        }
      }

    } else{
      cout << "The file was not found.";
    }
    return bananacount;
}

int main(){
  cout  << "Please enter the file name:\n" ;
  string filename ;
  cin >> filename ;

  int bananafinal = countbanas(filename);
  cout << "The word has been found " << bananafinal << " times.\n" ;

return 0;
}
