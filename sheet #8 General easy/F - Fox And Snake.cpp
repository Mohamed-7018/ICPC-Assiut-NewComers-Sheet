#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;


int main(void){
    int r,c;
    cin>>r>>c;

    int end=0;
    for (int i = 0; i<r; i++) {
        if (i%2 ==0 ) {
            for (int i =0; i<c; i++) cout <<"#";
        } else {
            end++;
            for (int j=0; j<c; j++) {
                if ( (end %2 ==1 && j == c-1) || (end %2 ==0 && j ==0) ){
                    cout <<"#";
                } else cout <<".";
            }
        }
        cout <<endl;
    }
}





