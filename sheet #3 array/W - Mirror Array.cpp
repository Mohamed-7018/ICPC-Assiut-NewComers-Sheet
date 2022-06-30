#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void){
    int n,m;
    cin >>n>>m;

    for (int i=0; i<n; i++) {
        int arr[m];

        for (int i=0; i<m; i++) cin >>arr[i];
        for (int i=m-1; i>=0; i-- ) cout<<arr[i]<<" ";
        cout <<endl;
    }

}





