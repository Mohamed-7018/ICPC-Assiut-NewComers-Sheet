#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>


using namespace std;

int main(void){

    string word;
    cin>>word;

    int e=0,g=0,y=0,p=0,t=0;
    int size = word.size();

    for (int i=0; i<size; i++) {
        if(word[i] == 'e' || word[i] == 'E'){
			e++;
		} else if(word[i] == 'g' || word[i] == 'G'){
			g++;
		}else if(word[i] == 'y' || word[i] == 'Y'){
			y++;
		}else if(word[i] == 'p' || word[i] == 'P'){
			p++;
		}else if(word[i] == 't' || word[i] == 'T'){
			t++;
		}
    }

    int eg = min(e,g);
    int egy= min(eg,y);
    int egyp = min(egy,p);
    int egypt =min(egyp,t);

    cout <<egypt;

}





