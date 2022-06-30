#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
 int arr[101];
 int arrayCount =0;

 string input;
 cin>> input;

 for (int i=0 ; i<input.size() ; i++) {
    if (input[i]== '+' ) continue;
    else arr[arrayCount++] = input[i]-'0';
 }

 sort(arr, arr+arrayCount);

 for (int i=0; i<arrayCount ; i++) {
    cout << arr[i];
    if (arrayCount -1 == i) break;
    cout <<"+";
 }
}