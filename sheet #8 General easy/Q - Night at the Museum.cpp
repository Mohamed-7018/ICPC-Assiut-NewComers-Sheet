#include <iostream>
using namespace std;
 
int main() {
	{
	string s ;
	cin>> s ;
	int len = s.length() ;
	int Smoves = 0 ;
	int strt = 0 ; // a
	for(int i = 0 ; i < len ; i++ ) { //
		int index = s[i]-97 ; // to make a = 0 ,..., z = 25
		int walk = abs(strt-index);//Pos (a-m) (0-12)=|12| & (a-p)=(0-15)=15
		if( walk > 13 ){
			Smoves +=  26 - walk ; // 26 - 15  = 11
		}else{
		    Smoves +=  walk ;
        }
		strt = index ; // to start when i was finish
	}
	cout<<Smoves;
	return 0;
}
}