#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1,n2; 
	cin>>n1>>n2;
	string code; 

	cin>>code;
	if(n1+n2+1 != code.size()){
		cout<<"No"<<endl;
		return 0;
	}
	if(code[n1] != '-'){
		cout<<"No"<<endl;
		return 0;
	}
	int counter = 0;
	for(int i=0;i<code.size();i++){
		if(code[i] >= 48 && code[i] <=57 && i != n1){
			counter++; 
		}
	}
	if(counter == n1+n2){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}





