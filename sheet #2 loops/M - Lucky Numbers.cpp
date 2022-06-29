#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


int main(){
int n1,n2,next=0,divide,total=0;
cin >>n1>>n2;

bool isLucky =false, stop =true;
for (int i= n1; i<=n2; i++) {
    divide =i;
    total =i;
    while (divide >0) {
        next =divide%10;
        divide /=10;
        if (next ==7 || next ==4) {
            isLucky = true;
            if (divide ==0 ) {
               stop = false;
               cout << total<< " ";
            }
        } else {
            isLucky =false;
            break;
        }
    }
}

if (isLucky ==false && stop ==true) cout<< -1;

}



