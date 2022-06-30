#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

int main(void){
    string codeLine;
    int newLine =1;

    while (getline(cin,codeLine)) {
        bool flag =0;
        if(codeLine.size() == 0 || codeLine == " "){
			continue;
		}
		for (int i=0; i<codeLine.size(); i++) {
            if (codeLine[i] =='/' && codeLine[i+1] =='/' && newLine) {
                break;
            }
            else if (codeLine[i] == '/' && codeLine[i+1] == '*'){
                i++;
                newLine =0;
            }
            else if (codeLine[i] == '*' && codeLine[i+1] == '/'&& !newLine){
                i++;
                newLine = 1;
            } else if (newLine == 1) {
                cout<<codeLine[i];
                flag=1;
            }
		}
		if (flag ==1  && newLine ==1) {
            cout <<endl;
		}
    }

}





