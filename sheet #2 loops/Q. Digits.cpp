
#include <iostream>
#include <cmath>
using namespace std;


int main () {
    int n,k;
    cin>> n;
    
    
    while(n>0) {
        int x, count =0, reverse=0, rem;
        cin>> x;
        
        int a =x;
        while (a>0) {
            a= a/10;
            count++;
        }
        // cout << count<< " ";
        
      while(x!=0)    {    
           rem=x%10;      
           reverse=reverse*10+rem;    
           x/=10;    
        }    
      


      for(int j=count-1; j>=0; --j){
			
			if(j == 0){
				cout<<reverse;
				break;
			}
			else{
				int k = pow(10,j);
				cout<<reverse/k<<" ";
				reverse = reverse%k;
			}
		} 
       cout <<endl;
       --n;
    }
}