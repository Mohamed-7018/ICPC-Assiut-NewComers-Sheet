#include<bits/stdc++.h>
using namespace std;


int main() {
    long long n;
    cin>>n;
    
    for (long long i=1; ; i++) {
        if(i > n){
			cout<<i-1;
			return 0;
		}else {
		    n -=i;
		}
    }
}