#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include<cmath>


using namespace std;

void func (int x,int n) {
     long long s = 0;
    for(int i=2;i<=n;i+=2){
		s += pow(x,i);
	}
    cout <<s;
}


int main(void){

    int x,n;
    cin>>x>>n;

    func(x,n);

}





