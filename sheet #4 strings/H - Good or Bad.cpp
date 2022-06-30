#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;


int main(void){


int n;
cin>>n;

while (n--) {
    string word;
cin>>word;

int flag=0;
for (int i=0; i<word.size() -2; i++) {
    if((word[i] == '0' && word[i+1] == '1' && word[i+2] == '0') ||(word[i] == '1' && word[i+1] == '0' && word[i+2] == '1')){
        flag =1;
        break;
    }
}

(flag==1)? cout<<"Good"<<endl : cout <<"Bad"<<endl;
}
}





