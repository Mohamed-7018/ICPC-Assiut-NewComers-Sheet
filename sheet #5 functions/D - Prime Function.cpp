#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

void isPrime (int num) {
 int newNumber = sqrt(num); 
 int flag = 0;
 for(int i = 2;i<= newNumber;i++){
 	if(num % i == 0){
 		flag = 1;
 		break;
	 }
 }
    flag == 0 ? cout <<"YES"<<endl : cout<< "NO"<<endl;
  }


int main(void){

    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;

        if(x == 1){
			cout<<"NO"<<endl;
			continue;
		}
        isPrime(x);
    }


}





