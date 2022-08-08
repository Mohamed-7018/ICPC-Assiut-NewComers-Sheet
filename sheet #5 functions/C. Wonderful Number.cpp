
#include <iostream>
using namespace std;
 

void binary (long long dec) {
    long long binary=0, rem, prod =1, rev=0, x;
    while (dec !=0) {
        rem = dec % 2;
        binary = binary + (rem * prod);
        dec =  dec /2;
        prod *=10;
    }
    
    //cout << binary << endl;
    long long n = binary; 
    while (n!=0) {
        x= n%10;
        rev = rev *10 + x;
        n/=10;
    }
    //cout<< rev<<endl;
    if (rev == binary) cout << "YES";
    else cout <<"NO";
    
}


bool even ( long long n) {
    if (n%2 ==0) return true;
    else return false;
}
 
int main() {
    long long num;
    cin>> num;
    
    if (even (num)) {
       cout << "NO";
    }else{
        binary(num);
    }
}