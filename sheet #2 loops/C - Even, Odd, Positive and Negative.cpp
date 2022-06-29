#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;


 int main () {
     int n,even=0,odd=0,positive=0,negative=0;
     cin >>n;

     int arr[n] ;

     for (int i =1 ; i<=n ; i++) {
        cin >> arr[i];
        if (arr[i] >0) positive ++;
        else if (arr[i] <0)  negative++;

        if (arr[i] %2 ==0 ) even++;
        else    odd ++;
     }

     cout <<"Even: " <<even<<endl;
     cout <<"Odd: " <<odd<<endl;
     cout <<"Positive: " <<positive<<endl;
     cout <<"Negative: " <<negative<<endl;

 }
