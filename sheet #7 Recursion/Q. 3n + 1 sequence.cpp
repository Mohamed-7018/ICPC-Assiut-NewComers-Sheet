#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int counter =0;

void algorithm (long long num) {
    counter ++;
    if (num ==1) return;
    else if (num % 2 ==0) algorithm(num/2);
    else algorithm(3*num+1);
}


int main () {
    long long num;
    cin >> num;


    algorithm(num);
    cout << counter;
}