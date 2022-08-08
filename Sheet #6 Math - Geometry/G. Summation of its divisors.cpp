#include<bits/stdc++.h>
using namespace std;

int main() {

	long long n; // 12
	cin>>n;
	long long result = 0;



	for(int i=1;i<=sqrt(n);i++){
		if(n % i == 0){
			result += i;
			if(i != sqrt(n)){
				result+=n/i;
			}
		}
	}
	cout<<result;
}