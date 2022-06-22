#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;


 int main () {
     int x,y,Ans;
     char op,eq;
     cin >>x>>op>>y>>eq>>Ans;

     if (op == '+'){
        if ((x+y) == Ans) cout <<"Yes";
        else cout <<x+y;
     }
     else if (op == '-') {
        if ((x-y) == Ans) cout <<"Yes";
        else cout << x-y;
     }
     else if (op=='*'){
        if ((x*y)==Ans) cout <<"Yes";
        else cout << x*y;
     }
     else if (op == '/'){
        if ((x/y)==Ans) cout <<"Yes";
        else cout << x/y;
     }

 }
