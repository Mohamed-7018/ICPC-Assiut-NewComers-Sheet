#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int A,B,C,D;

    cin >>A>>B>>C>>D;
    int s =((A%100)*(B%100)*(C%100)*(D%100))%100;
    if(s < 10) cout << 0 << s ;
    else cout << s ;
}
