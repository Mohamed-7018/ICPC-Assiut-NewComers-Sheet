#include <iostream>
using namespace std;


bool checkEven (int arr[], int n) {
    for (int i=0; i< n; i++){
        if (arr[i]%2 !=0) return false; 
    }
    for (int i=0; i<n; i++) {
        arr[i] = arr[i]/2;
    }
    return true;
}


int  main() {
    int n, even=0;
    cin>>n;
    
    
    
    int arr[n] ;
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    
    while (checkEven (arr,n)) {
        even++;
    }
    
    cout<< even;
     
     
}


