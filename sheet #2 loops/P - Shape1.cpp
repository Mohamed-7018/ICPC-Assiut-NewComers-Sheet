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


for (int i=n+1; i>1; i--) {
       for (int j=i; j>1; j--) cout << s;
        cout << endl;
}

}



