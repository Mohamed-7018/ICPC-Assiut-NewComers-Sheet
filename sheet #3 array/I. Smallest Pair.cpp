#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
int testCases,r = 0,flag = 1,lowest; 
	cin>>testCases;
	while(testCases--){
		int n; 
		cin>>n;
		int arr[n]; 
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int z=1;z<=n;z++){
			for(int x=z+1;x<=n;x++){
				r = (arr[z-1] + arr[x-1]) + (x-z);
				if(flag == 0 && lowest > r){
					lowest = r;
				}
				if(flag){ 
					lowest = r;
					flag = 0; 
				}
				r = 0;
			}
		}
		flag = 1;
		cout<<lowest<<endl;
	}


}





