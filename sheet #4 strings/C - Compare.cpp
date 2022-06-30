#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void){
    string first,second;
    cin>> first>>second;

    int firstSize = first.size();
    int secondSize = second.size();

    int size = min(firstSize, secondSize);
    int flag = 0;

    for (int i =0; i<size;i++ ) {
        if (first[i]< second[i]) {
            cout<<first;
            flag=0;
            break;
        }
        else if (first[i]>second[i]) {
            cout<<second;
            flag=0;
            break;
        }
        else {
            flag = 1;
        }
    }

    if (flag ==1 ){
        if (firstSize>secondSize) cout<<second;
        else cout << first;
    }

}





