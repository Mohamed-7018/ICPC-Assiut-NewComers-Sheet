#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


int main(){

int n; long long sum=0;
cin>>n;

long long arr[n];
for (int i=0; i<n; i++) {
    cin>> arr[i];
    sum+=arr[i];
}
if (sum>=0) cout <<sum;
else cout << abs(sum);

}



