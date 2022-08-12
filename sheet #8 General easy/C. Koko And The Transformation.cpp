#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int main () {
    int size1, size2, sum1 = 0, sum2 = 0, num;
    cin>> size1 >> size2;
    
	for(int i=0;i<size1;i++){
		cin>>num;
		sum1+=num;
	}
	for(int i=0;i<size2;i++){ 
		cin>>num;
		sum2+=num;
	}
	if(sum1 == sum2)	cout<<"Yes";
	else cout<<"No";
	
}