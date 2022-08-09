#include<iostream>
using namespace std;
#include<bits/stdc++.h>


long long fact (long long num) {
    if (num <=1) return 1;
    return num*fact(num-1);
}



int main () {
    long long num1,num2;
    cin >> num1 >> num2;

    if(num2 > num1 || num1<0 || num2<0){
		cout<<0;
	}
    else{
        long long c = fact(num1)/(fact(num1-num2) * fact(num2));
        cout << c;
    } 
}