#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

string isPalindrome(string S)
{

    string P = S;

    reverse(P.begin(), P.end());

    if (S == P) {
        return "YES";
    }

    else {
        return "NO";
    }
}
int main(void){
    string S ;
    cin>>S;
    cout << isPalindrome(S);

    return 0;
}





