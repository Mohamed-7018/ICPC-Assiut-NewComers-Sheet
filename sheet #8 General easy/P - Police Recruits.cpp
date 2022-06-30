#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;

    int s;
    int t=0,u=0;
    for (int i=0; i<n ; i++){
        cin >>s;
        if  (s>0) t+=s;
        else if (s<0 && t==0) u++;
        else if (s<0 && t!=0) t--;
    }

    cout <<u;
}