#include <iostream>
#include<string>
#include<map>
using namespace std;


int main () {
    string s[3] = {};
    map <char,int> coins;

    for (int i=0; i<3; i++) {
        cin >> s[i];
    }

   coins['A']=0;
   coins['B']=0;
   coins['C']=0;

   for (int i =0; i<3; i++) {
       if (s[i][1] == '>') {
           coins [s[i][0]]++;
           coins [s[i][2]]--;
       }
        else  {
           coins [s[i][0]]--;
           coins [s[i][2]]++;
       }
   }


  
      if(coins['A']>coins['B']&&coins['B']>coins['C']) cout<<"CBA";
	  else if (coins['A']>coins['C']&&coins['C']>coins['B']) cout<<"BCA";
      else if(coins['B']>coins['A']&&coins['A']>coins['C'])  cout<<"CAB";
	  else if(coins['B']>coins['C']&&coins['C']>coins['A'])  cout<<"ACB";
      else if(coins['C']>coins['A']&&coins['A']>coins['B'])  cout<<"BAC";
	  else if(coins['C']>coins['B']&&coins['B']>coins['A'])  cout<<"ABC";
	  else	cout<<"Impossible";    
    
}