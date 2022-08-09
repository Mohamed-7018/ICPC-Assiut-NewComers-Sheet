#include<iostream>
using namespace std;
#include<bits/stdc++.h>


long long fab (long long num) {
    if(num == 1){
		return 0;
	}
	
	else if(num == 2){
		return 1;
	}
	
	else {
		return fab(num-1)+fab(num-2);
	}
}

int main () {
    long long num;
    cin >> num;
    
    cout << fab (num);
}