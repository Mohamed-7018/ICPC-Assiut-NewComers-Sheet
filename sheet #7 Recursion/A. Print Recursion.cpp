#include<bits/stdc++.h>
using namespace std;


void print (int num) {
    if (num==0) {
        return ;
    }
    cout << "I love Recursion"<<endl;
    return print (num-1);
}


int main () {
    int num ;
    cin >> num;
    print (num);
}