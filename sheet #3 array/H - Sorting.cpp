#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin >>n;

    int arr[n];
   for (int i =0; i<n; i++ ) cin >> arr[i];

    int s = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + s);

    for (int i = 0; i < s; ++i) cout << arr[i] << " ";

    return 0;


}





