#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

      if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(void)
{
    int n;
    cin>>n;

    int x;
    cin>>x;

    int arr[n];
    for (int i=0; i<n; i++) cin >>arr[i];

    sort(arr,arr+n);

   int s[x];
    for (int i=0; i<x; i++) cin >>s[i];


    int size1 = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<x; i++) {
        int result = binarySearch(arr, 0, size1 - 1, s[i]);
    (result == -1)
        ? cout << "not found"<<endl
        : cout << "found"<<endl;
    }

    return 0;
}





