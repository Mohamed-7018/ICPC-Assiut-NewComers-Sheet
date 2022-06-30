#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void){
int row,column;
	cin>>row>>column;
	char arr[101][101]; 
	for(int i=1;i<=row;i++){
		for(int z=1;z<=column;z++){
			cin>>arr[i][z];
		}
	}
	int rowIn,columnIn;
	cin>>rowIn>>columnIn;
	if(arr[rowIn][columnIn-1] != '.' &&
	   arr[rowIn][columnIn+1] != '.' &&
	   arr[rowIn - 1][columnIn] != '.' &&
	   arr[rowIn + 1][columnIn] != '.' &&
	   arr[rowIn - 1][columnIn - 1] != '.' &&
	   arr[rowIn - 1][columnIn + 1] != '.' &&
	   arr[rowIn + 1][columnIn - 1] != '.' &&
	   arr[rowIn + 1][columnIn + 1] != '.'){
		cout<<"yes";
	} else {
		cout<<"no";
	}

}





