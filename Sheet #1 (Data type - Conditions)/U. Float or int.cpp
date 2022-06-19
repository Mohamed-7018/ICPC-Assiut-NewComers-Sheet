#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
   double n;

   cin>>n;

   if(abs(n-int(n))>0)	{
    cout<<"float "<<int(n) <<" "<< abs(n-int(n));
   }
	else {
        cout<<"int " << int(n);
	}

}
