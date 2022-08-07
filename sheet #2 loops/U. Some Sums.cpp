#include <iostream>
using namespace std;

int check(int i, int a, int b){
	short int sum=0;
	while(i>0){
		sum += i%10;
		i = i/10;
	}
	if(sum>=a && sum<=b)
		return 1;
	else
		return 0;
}

int main(){
	short int n, a, b, i;
	int sum=0;
	cin >> n >> a >> b;
	for(i=1; i<=n; ++i){
		if(check(i, a, b)){
			sum+=i;
		}
	}
	cout<<sum;
	return 0;
}