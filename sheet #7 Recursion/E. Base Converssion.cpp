#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void binary (int num){
  string out;    
  while (num !=0) {
    if (num%2 ==0 ) out = out+"0";
    else   out = out+"1";
    
    num = num/2;
  }
  
   reverseStr (out);
   cout << out;

}




int main () {
 int count;
 cin >> count;
 
 for (int i=0; i<count; i++) {
     int num;
     cin >>  num;
     
     binary(num);
     cout <<endl;
 }
}