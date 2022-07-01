#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;



bool isPrime (int num) {
    int flag=0;
    for (int i=2; i<num; i++) {
        if (num % i ==0) {
            flag =1;
            break;
        }
    }

    if (flag==0 && num !=1) return true;
    else return false;
}
int countDivisor(int num){
	int m = num / 2;
	int counter = 0;
	for(int z = 1;z<= m;z++){
		if(num % z == 0){
			counter++;
		}
	}
	return counter;
}
bool palindrome(int num){ // 1551
	int temp = num;
	int sum = 0; // 150
	int d;
	while(num > 0){ // 1
		d = num % 10; //1
		sum=(sum*10) + d; //1
		num /= 10; // num = num / 10;
	}
	if(temp == sum){
		return true;
	} else {
		return false;
	}
}


int main(void){
int n, primeCounter=0,palindromeCounter=0;
cin>>n;

int arr[n];
for (int i=0; i<n; i++) cin >>arr[i];

sort(arr,arr+n);


cout<<"The maximum number : "<<arr[n - 1]<<endl;
cout<<"The minimum number : "<<arr[0]<<endl;

for (int i=0; i<n; i++)
 {
     if (palindrome(arr[i]))palindromeCounter++;
      if (isPrime(arr[i])) primeCounter++;

 }

 	cout<<"The number of prime numbers : "<<primeCounter<<endl;
	cout<<"The number of palindrome numbers : "<<palindromeCounter<<endl;

	int c;
	int max;
	int loc;
	for (int i=0; i<n; i++) {
        c= countDivisor(arr[i]);
        if (i==0) {
            max=c;
            loc =i;
        }else {
            if (c>=max) {
                max=c;
                loc = i;
            }
        }
	}

    cout<<"The number that has the maximum number of divisors : "<<arr[loc]<<endl;


}





