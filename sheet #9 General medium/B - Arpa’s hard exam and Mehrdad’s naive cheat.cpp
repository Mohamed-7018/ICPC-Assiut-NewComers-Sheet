#include <iostream>
using namespace std;
#include<string>
#include<algorithm>

#include <cmath>

int  main () {
   int n;
 while(cin>>n)
    {
        if((n%4)==1)
            cout<<"8"<<endl;
        else if ((n%4)==2)
            cout<<"4"<<endl;
        else if((n%4)==3)
            cout<<"2"<<endl;
        else if((n%4)==2)
            cout<<"2"<<endl;
        else if(n==0)
            cout<<"1"<<endl;
        else if((n%4)==0)
            cout<<"6"<<endl;

        else
            cout<<"0"<<endl;
    }
}
