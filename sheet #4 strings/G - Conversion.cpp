#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;


int main(void){
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++){
		if(str[i] == ','){
			cout<<" ";
		} else if (str[i] >= 'a' && str[i] <= 'z') {
			int as = str[i] - 32; // 97 - 32 = 65
			char res = as; // A
			cout<<res;
		} else {
			int as = str[i] + 32; // 97 - 32 = 65
			char res = as; // A
			cout<<res;
		}
     }
}





