#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;




int main(void){

    int n,lowest, biggest;
    cin >> n;

    int arr[n];
    for (int i =0; i<n; i++) {
        cin >>arr[i];
    }

    lowest = biggest= arr[0];

     for (int i =0; i<n; i++) {
       if (arr[i] < lowest) lowest = arr [i];
       else if (arr[i] > biggest) biggest = arr[i];

    }

    cout << lowest << " " << biggest;

}





