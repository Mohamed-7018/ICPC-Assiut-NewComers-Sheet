#include <bits/stdc++.h>
using namespace std;
int main() {
	 int n;
		cin>>n;

	string firstOutputColor="GBIV", secondOutputColor; 	
		n<7 ?  cout<<"Wrong!" :  cout<<"ROYGBIV"; 
		// if (n<7) ;
		// else      cout<<"ROYGBIV";
	    n=n-7;
		for (int i=1;i<=n/4;i++)
			cout<<firstOutputColor;
		n=n%4;
		secondOutputColor="";
		for (int i=0;i<n;i++)
		    secondOutputColor=secondOutputColor+firstOutputColor[i];
		cout<<secondOutputColor;
		return 0;
}