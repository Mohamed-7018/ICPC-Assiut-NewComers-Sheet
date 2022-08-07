#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t, n, sum;
	short int i;
	cin >> t;
	while(t--){
		cin >> n;
		i = 0;
		sum = 0;
		while(n>0){
			if(n%2 == 1)
				++i;
			n = n/2;
		}
		while(i>0){
			--i;
			sum+= pow(2,i);
		}
		cout<<sum<<"\n";
	}
	return 0;
}