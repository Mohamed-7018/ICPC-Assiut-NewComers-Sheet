#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;


int main(void){
	int wordSize; 
	cin>>wordSize;
	while(wordSize--){ 
		string value; 
		cin>>value;
		int size = value.size(); 
		if(size > 10){
			cout<<value[0]<<size-2<<value[size-1]<<endl;
		} else {
			cout<<value<<endl;
		}
	}

}





