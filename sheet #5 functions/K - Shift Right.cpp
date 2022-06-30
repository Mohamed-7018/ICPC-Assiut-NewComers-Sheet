#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;

const int s = 100001;
void print1(int arr[s],int theShift,int size){
	for(int i = theShift;i<size;i++){ // i = 5   i< 5
		cout<<arr[i]<<" ";
	}
}
void print2(int arr[s],int theShift){
	for(int i = 0;i<theShift;i++){ // i = 0   i< 4    0 1 2 3
		cout<<arr[i]<<" ";
	}
}

int main(void){

int n,shift;
cin >>n>>shift;

int arr[n];
for (int i =0; i<n; i++) cin >>arr[i];


int x= shift % n;

print1(arr,n - x,n);
print2(arr,n - x);
}





