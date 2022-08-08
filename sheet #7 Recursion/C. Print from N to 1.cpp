#include<bits/stdc++.h>
using namespace std;

void print (int num) {
    if(num == 0){
		return;
	}
    if (num ==1) cout << 1;
    else cout << num <<" ";
    return print (num-1);
}


int main () {
    int num ;
    cin >> num;
    print (num);
}