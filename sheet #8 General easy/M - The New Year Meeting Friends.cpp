#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;


int main(void){

int x1,x2,x3;
cin >>x1>>x2>>x3;



	cout<<max(max(x1,x2),x3) - min(min(x1,x2),x3);

}





