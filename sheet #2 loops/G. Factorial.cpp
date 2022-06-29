#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


 int main () {

    int n;
    cin >> n;
    void factorial(int n);

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for (int i=0; i<n; i++) {
        factorial(arr[i]);
           }



    return 0;


 }

  void factorial(int n){
    long int factorial = 1;
    
    if (n==0) {
        cout <<1;
    }
    else {
        
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << factorial <<endl;
    }


 }



