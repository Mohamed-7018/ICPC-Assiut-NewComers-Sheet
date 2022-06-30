#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void fib(long n) {
   long long f[n];
   long long i;
   f[0] = 0;
   f[1] = 1;
   for (i = 2; i < n; i++) {
      f[i] = f[i-1] + f[i-2];
   }
   for (i = 0; i < n; i++) {
      if (i==n-1) cout<<f[i]<<" ";
   }
}
int main(){
   long long n ;
   cin>> n;
    fib(n);
   return 0;
}


