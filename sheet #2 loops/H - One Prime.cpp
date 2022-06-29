#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


 int main () {

 int i, n;
  bool is_prime = true;

  cin >> n;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout <<"YES";
  else
    cout <<"NO";


    return 0;


 }





