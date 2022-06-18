#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  float n,m,s;
  cin>>n>>m;

 s= n/m;

  cout <<"floor " <<n<<" / "<<m<< " = "<<floor(s)<<endl;
  cout <<"ceil " <<n<<" / "<<m<< " = "<<ceil(s)  <<endl;
  cout <<"round " <<n<<" / "<<m<< " = "<<round(s)<<endl;

}
