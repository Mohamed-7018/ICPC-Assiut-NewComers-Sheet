#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
 int n,first,digits;

 cin >>n;

 digits = log10(n);
 first = n/pow(10,digits);

 if (first%2 ==0 ) cout <<"EVEN";
 else cout <<"ODD";

}
