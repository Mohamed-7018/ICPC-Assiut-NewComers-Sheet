#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;


int main(void){

	int lucky[12]={4,7,44,47,47,444,447,474,477,777,774,744};
    int n;
    cin>>n;

    int isLucky=0;
    for (int i=0; i<12; i++) {
        if (n% lucky[i] ==0) {
            isLucky =1;
            break;
        }
    }

    (isLucky == 1) ? cout <<"YES" : cout <<"NO";

}





