#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;

void print(int n, int arr[]){
	for (int i=0; i<n; i++) cout << arr[i] <<" ";
}


int main(void){
int n;
cin>>n;

int arr[n];
int arr2[n];

for (int i=0; i<n; i++) cin >>arr[i];
for (int i=0; i<n; i++) cin >>arr2[i];

print (n,arr2);
print (n,arr);


}





