#include <string>
#include <iostream>
using namespace std;
#include "BigIntegerLibrary.hh"

BigInteger is_palindrome(BigInteger n){
  BigInteger changed =0;
  while(n>0) {
  changed = (changed*10)+(n%10);
  n=n/10;
  }
    return changed;
  }

BigInteger apply196(BigInteger n){
  BigInteger sum;
  int resp, tries = 0;
  if (n==is_palindrome(n)) {
    resp = 1;
  } else {
   sum= n+is_palindrome(n);
  while (tries!=30 && sum!=is_palindrome(sum)) {
    sum=sum+is_palindrome(sum);
    tries=tries+1; }
    if (tries==30) {
      resp = 2;
      std::cout << "Lychrel candidate is " << n << '\n';
    }
    else {
      resp=3;
    }
}
  return resp;
}

int main() {
  int low, high, lychrel, first, moretries, resp;
  BigInteger n;
  lychrel=0;
  first=0;
  moretries=0;
  std::cout << "Please enter the starting number" << '\n';
  cin>> low;
  std::cout << "Please enter the highest number" << '\n';
  std::cin >> high;
  for (int i = 0; n!=high; i++) {
    n=low+i;
    if (apply196(n)==1) {
      first=first+1;}
      else if (apply196(n)==2) {
        lychrel=lychrel+1;
      }
      else {
        moretries=moretries+1;}
      }
std::cout << "Lychrels: " << lychrel << '\n';
std::cout << "Natural palindrome: " << first << '\n';
std::cout << "More tries palindromes: " << moretries << '\n';

  return 0;
}
