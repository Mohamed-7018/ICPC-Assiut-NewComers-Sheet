#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


 int main () {
 int n,m=0;
 cin >>n;

 int arr[n];

 for (int i =0; i<n; i++) {
    cin >>arr[i];
    if (arr[i]>m) m= arr[i];
 }

 cout <<m;


 }
