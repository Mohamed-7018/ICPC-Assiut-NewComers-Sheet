#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;


int main(void){
string digit;
cin>>digit;

long long sum=0;

for (int i=0; i< digit.size(); i++) {
    sum +=digit[i] - '0';
}

cout <<sum;

}





