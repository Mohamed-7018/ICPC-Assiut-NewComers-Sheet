#include <iostream>
#include <algorithm>
#include <cctype>
 
using namespace std;
 
 
 int main () {
     int n;
     cin >>n;
 
     if  (n<=1) cout << -1;
     
     for (int i =1 ; i<=n ; i++) {
        if (i%2 ==0) cout <<i <<endl;
     }
 }