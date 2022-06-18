#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
     char c;
    cin >> c;
    if (int(c) > 64 & int(c) < 97){
            c=c+32;
    }
    else if (int(c) > 96 & int(c) < 123){
        c=c-32;
    }

    cout<<c;
}
