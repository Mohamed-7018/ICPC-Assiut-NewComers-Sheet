#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>

using namespace std;


int main(){
char s ;
s='*';

int n;
cin>>n;


for (int i=2; i<=n+1; i++) {
       for (int j=1; j<i; j++) cout << s;
        cout << endl;
}

}



