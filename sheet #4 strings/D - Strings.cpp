#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void){
string first,second;
cin>>first>>second;


cout <<first.size()<<" "<<second.size()<<endl;
cout <<first+second<<endl;

char temp = second[0];
second[0]= first[0];
first[0] = temp;

cout <<first << " " <<second;

}





