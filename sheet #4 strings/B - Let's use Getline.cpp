#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void){
string text;
getline(cin,text);


for(int i=0;i<text.size();i++){
		if(text[i] == '\\'){
			break;
		}
		cout<<text[i];
	}

return 0;
}





