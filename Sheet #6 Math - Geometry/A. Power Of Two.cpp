
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 

int main () {
    long long n;
    cin>>n;
    
    double res = log2(n) / log2(2);
    
    if (res - (long long) res !=0) cout <<"NO";
    else cout << "YES";

}