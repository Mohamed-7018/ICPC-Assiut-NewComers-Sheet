#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

int main(void){
string url;
cin>>url;
int size = url.size();

for (int i=0; i<size; i++){
    if (url[i] == '?') {
        i++;
        for (int j=i; j<size; j++) {
            if (url[j]=='=') {
                cout <<": ";
                continue;
            }
             else if (url[j]=='&') {
                cout <<endl;
                continue;
            }
            cout <<url[j];
        }

        break;

    }
}
}





