#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

  int n,lowest, biggest, minloc, maxloc;
    cin >> n;

    int arr[n];
    for (int i =0; i<n; i++) {
        cin >>arr[i];
    }

   lowest = arr[0];
    minloc =0;
     for (int i =0; i<n; i++) {
       if (arr[i] < lowest) {
            lowest = arr [i];
            minloc = i;
       }
    }

   biggest = arr[0];
    maxloc =0;
     for (int i =0; i<n; i++) {
       if (arr[i] > biggest) {
            biggest = arr [i];
            maxloc = i;
       }
    }

    arr[maxloc] =lowest;
    arr[minloc] = biggest;

    for (int i =0; i<n; i++) cout <<arr[i] <<" ";
}





