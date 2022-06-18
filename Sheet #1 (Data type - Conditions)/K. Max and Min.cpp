#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
int a,b,c,max1,max2,min1,min2;
cin >>a>>b>>c;

max1 = max(a,b);
max2 = max(max1,c);

min1 = min(a,b);
min2 = min (min1,c);

cout <<min2<< " " << max2;
}
