#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


int main(){
    int n,lowest, loc;
    cin >> n;

    int arr[n];
    for (int i =0; i<n; i++) {
        cin >>arr[i];
    }

    lowest = arr[0];
    loc =0+1;
     for (int i =0; i<n; i++) {
       if (arr[i] < lowest) {
            lowest = arr [i];
            loc = i+1;
       }
    }

    cout << lowest << " " << loc;




}



