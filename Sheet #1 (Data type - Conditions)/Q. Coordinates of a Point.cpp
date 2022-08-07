
#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cin >> x >> y;
	
     

     if(x==0 && y==0)
		cout<<"Origem";
     else if (x==0 && y!=0)
		cout<<"Eixo Y";
     else if (x!=0 && y==0)
		cout<<"Eixo X";
      
	else
		cout<<(x>0?(y>0?"Q1":"Q4"):(y>0?"Q2":"Q3"));
}