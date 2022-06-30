#include <iostream>
using namespace std;
#include<string>
#include<algorithm>

#include <cmath>
 
int main() {
int n,k;
cin>>n>>k;
int sum=0;
for(int i=0;i<n;i++){
	int r,l;
	cin>>r>>l;
	sum+=((l-r)+1);
}
cout<<(k-(sum%k))%k<<endl;
 
	return 0;
}