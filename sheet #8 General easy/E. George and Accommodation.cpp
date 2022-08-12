#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main () {
    int n;
    cin>> n;
    
    int count =0;
    
    for (int i=0; i<n; i++) {
        int x,y;
        cin >>x>>y;
        
        if (y - x >= 2) count ++;
    }
    
    cout << count;
}