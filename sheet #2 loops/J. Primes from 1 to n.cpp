#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


int main(){

    int n, i, j, isPrime, n;

    cin >> n;


    for(i = 2; i <= n; i++){
        isPrime = 0;
        for(j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }

        if(isPrime==0 && n!= 1)
            cout << i << " ";
    }

   return 0;
}




