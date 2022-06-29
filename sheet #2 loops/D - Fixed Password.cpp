#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


 int main () {
   int i =0;
   while (i<10000){
    int n;
    cin >> n;
    if (n == 1999) {
        cout << "Correct" ;
        break;
    }
    else {
        cout<<"Wrong"<<endl;
        i++;
    }
   }

 }
