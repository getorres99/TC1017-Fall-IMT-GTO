#include <iostream>
#include <stdlib.h>
using namespace std;

unsigned int factorialrec(unsigned int n){
  cout << "calculate the factorial of " << n << endl;
  if(n == 0){
    return 1;
  } else {
    return n * factorialrec(n-1);
  }
}

// assume n is not negative
unsigned int factorialmult(unsigned int n){
  cout << "calculate the factorial of " << n << endl;
  unsigned int answer = 1;
  for(int k = 1; k <= n; k=k+1){
    answer = answer * k;
  }
  return answer;
}

int main ()
 {
int n, factorial=1;
cout << "Please enter a non-negative integer: " << '\n';
cin >> n;

factorial = factorialmult(n);
cout << factorial << endl;





  return 0;
}
