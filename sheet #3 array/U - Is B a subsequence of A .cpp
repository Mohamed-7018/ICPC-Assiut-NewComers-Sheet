#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void){

    long long  n,m;
    cin >> n>>m;

    long long arr[n],subarr[m];
    for (int i=0;i<n;i++ ) cin >>arr[i];
    for (int i=0; i<m;i++) cin >>subarr[i];


    int z = 0;
	int counter = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == subarr[z]){
			counter++;
			z++;
		}
	}

	(counter == m)? cout<<"YES" : cout <<"NO";
}





