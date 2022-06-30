#include <iostream>
#include <string>
#include<algorithm>


#include<bits/stdc++.h>

using namespace std;

int main() {

   long long n,output;
    cin>>n;

    if(n % 2 == 0) output = n / 2;
    else output=((n + 1) / 2) * (-1);
    cout << output ;
}


