#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;


  if (n%m ==0 || m%n ==0) cout <<"Multiples";
  else cout<< "No Multiples";
}
