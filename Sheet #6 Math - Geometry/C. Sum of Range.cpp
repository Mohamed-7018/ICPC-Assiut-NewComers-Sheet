
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 

long long even (long long n) {
    long long res = (n*(n+1));
	return res;
}

long long odd (long long n) {
    long long res = (n + 1) / 2;
	long long finalRes = res * res;
	return finalRes;
}

int main () {
    
    int x, y;
    cin>>x>>y;
    
    if (x>=y) {
        long long temp = x;
        x = y;
        y = temp;
    }
    
    long long evenSum = even(y/2) - even ((x-1)/2);
    long long oddSum = odd(y) - odd(x-1);
    cout << evenSum+oddSum<<endl;
    cout << evenSum<<endl;
    cout << oddSum <<endl;
    
}