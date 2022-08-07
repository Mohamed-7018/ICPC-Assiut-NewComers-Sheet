#include <iostream>
using namespace std;

int main(){
	short int m, n;
	int sum;

      int count;
      cin>> count;
	for (int i=0; i<count; i++){
		cin >> m >> n;
		sum = 0;
		
		//if(m<=0 || n<=0)
		//	break;
		
		if(m>n){
			int temp = m;
                  m= n;
                  n=temp;     
		}
		
		for(int i = m+1; i<=n-1; ++i){
			if (i%2 !=0) sum+=i;
		}
		cout<<sum<<"\n";
	} 	
	return 0;
}