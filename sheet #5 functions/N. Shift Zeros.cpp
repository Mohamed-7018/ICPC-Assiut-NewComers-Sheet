
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 

int main () {
    int n;
    cin>>n;
    
    int counter =0 ;
    for (int i=0; i<n; i++) {
        int val;
        cin>> val;
        
        if (val == 0) counter ++;
        else cout << val << " ";
    }
    
    for (int i =0; i< counter; i++) {
        cout << 0 << " ";
    }
}