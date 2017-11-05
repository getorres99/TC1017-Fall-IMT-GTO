#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{

cout  << "Please enter the file name:\n" ;
string filename ;
cin >> filename ;

ifstream file( filename.c_str() ) ;

  if(file.is_open() )
 	{
 		cout << "Write the word you're searching for:\n" ;
 		string word ;
 		cin >> word ;

 		int countwords = 0 ;
 	string candidate ;
 		while( file >> candidate ) 
 		{
 			if( word == candidate ) ++countwords ;
 		}

 		cout << "The word '" << word << "' has been found " << countwords << " times.\n" ;
 	}

 	else
 	{
 		cout << "Error! File not found!\n" ;
 		return 0 ;
 	}
 }
