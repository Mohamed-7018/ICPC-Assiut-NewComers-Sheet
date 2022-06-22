#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;


 int main () {
     int x,y;
     char op;
     cin >>x>>op>>y;

     if (op == '>'){
        if (x>y) cout <<"Right";
        else cout <<"Wrong";
     }
     else if (op == '<') {
        if (x<y) cout <<"Right";
        else cout << "Wrong";
     }
     else if (op=='='){
        if (x==y) cout <<"Right";
        else cout << "Wrong";
     }

 }
