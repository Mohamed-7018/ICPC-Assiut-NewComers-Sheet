#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, e=1;
    cin>>n;

    int arr[n], permutation[n];
    for (int i=0; i<n; i++ ) cin>> arr[i];
    sort(arr,arr+n);
    for (int i=0; i<n; i++ )cin>> permutation[i];
    sort(permutation,permutation+n);

    for (int i=0; i<n; i++ ) {
        if (arr[i] != permutation[i]) {
            e=0;
            break;
        }
    }
    (e==0) ? cout <<"no" : cout<<"yes";
    return 0;
}





