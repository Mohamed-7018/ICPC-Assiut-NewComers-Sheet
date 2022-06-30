#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


int main(){

int n,x,found=0;
cin >>n;

 int arr[n];
 for  (int i=0; i<n; i++) {
    cin >>arr[i];
 }
 cin >> x;
 for (int i=0; i<n; i++) {
    if (arr[i] == x) {
        cout << i;
        found = 1;
        break;
    }
 }

 if (found ==0) cout << -1;

}



