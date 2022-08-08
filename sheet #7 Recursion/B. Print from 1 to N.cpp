#include<bits/stdc++.h>
using namespace std;

int counter= 1;
void print (int num) {
    if(num == 0){
		return;
	}
    cout << counter ++<<endl;
    return print (num-1);
}


int main () {
    int num ;
    cin >> num;
    print (num);
}