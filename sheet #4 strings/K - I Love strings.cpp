#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

int main(void){
	int testCases;
	cin>>testCases;
	while(testCases--){
		string value1,value2;
		cin>>value1>>value2;
		int size = value1.size() + value2.size();
		int flag1 = 1,flag2 = 1;
		for(int i=0;i<size;i++){
			if(value1.size() != i && flag1){
				cout<<value1[i];
			} else {
				flag1 = 0;
			}
			if(value2.size() != i && flag2){
				cout<<value2[i];
			} else {
				flag2 = 0;
			}
		}
		cout<<endl;
	}
}





