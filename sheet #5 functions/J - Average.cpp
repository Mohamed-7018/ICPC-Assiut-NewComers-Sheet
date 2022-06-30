#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;




int main(void){

int n;
cin>>n;

double sum=0;
for (int i=0; i<n; i++) {
    double x;
    cin>>x;

    sum+=x;
}

cout <<setprecision(8)<<sum/n;

}





