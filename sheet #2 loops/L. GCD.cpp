#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


int main(){
int gcd(int a, int b);
   int x, y;
   cin >>x>>y;
   cout << gcd(x,y);
}
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}



