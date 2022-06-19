#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    long double A,B,C,D;

    cin >>A>>B>>C>>D;
    B=B/1e12;
    D=D/1e12;
    long double x = pow(A,B);
    long double y= pow(C,D);
    if ( x > y){
        cout<<"YES";
    }
    else{
         cout<<"NO";
    }
}
