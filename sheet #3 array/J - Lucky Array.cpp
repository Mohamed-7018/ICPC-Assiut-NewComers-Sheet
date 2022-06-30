#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , lowest,c =0;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++) {
            cin >>arr[i];
    }

    lowest = arr[0];
    for (int i =0; i<n; i++) {
       if (arr[i] < lowest) {
            lowest = arr [i];
       }
    }



     for (int i =0; i<n; i++) {
       if (arr[i] == lowest)  c++;
    }

    if (c%2 == 0 ) cout << "Unlucky";
    else cout << "Lucky";
}





