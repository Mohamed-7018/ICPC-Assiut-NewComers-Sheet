#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

int main(void){
    string S ;
    cin>>S;
    sort (S.begin(),S.end());
    int size = S.size();

    for (int i=0; i<size; i++) {
        char c = S[i];
        int counter = 1;
        while (S[i]==S[++i]) counter++;
        i--;
        cout <<c <<" : "<<counter <<endl;
    }
}





