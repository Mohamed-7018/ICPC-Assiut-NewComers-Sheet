#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void){
    int n,m;
    cin>>n>>m;

    int arr[1000001] = {0};
    for (int i=0; i<n; i++) {
            int num;
            cin>>num;

            if(arr[num] ==0 )  arr[num]=1;
            else  arr[num] = arr[num] +1;

    }

    for(int i=1;i<=m;i++){
		cout<<arr[i]<<endl;
	}



}





