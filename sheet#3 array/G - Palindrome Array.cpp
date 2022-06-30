#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void check_palindrome(int arr[], int size);
int main(){
 int n;
 cin >>n;

 int arr[n];
 for (int i =0; i<n; i++ ) {
    cin >> arr[i];
 }
   int size = sizeof(arr) / sizeof(arr[0]);
   check_palindrome(arr, size);
   return 0;



}


void check_palindrome(int arr[], int size){
   int flag = 0;
   int arr_2[size];
   memcpy(arr_2, arr, size * sizeof(int));
   reverse(arr, arr + size);
   for (int i = 0; i < size; i++)
      if (arr[i] != arr_2[i]){
         flag = 1;
         break;
      }
      if (flag == 0)
         cout << "YES";
      else
         cout << "NO";
}


