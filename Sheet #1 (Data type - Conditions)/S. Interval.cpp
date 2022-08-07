#include <iostream>
using namespace std;

int main()
{
	float n;
	cin >> n;


	if (n<0 || n>100)  cout<<"Out of Intervals";
	else if (n>=0 && n<=25) cout<<"Interval [0,25]";
	else if (n>25 && n<=50) cout<<"Interval (25,50]";
	else if (n>50 && n<=75) cout<<"Interval (50,75]";
	else cout<<"Interval (75,100]";
}