#include<bits/stdc++.h>
using namespace std;


int main () {
    long long num;
    cin >> num;
    
    int value;
    for (int i=0; i<num; i++) {
        value = 1;
        for(int z =0;z<=i;z++){ //   
			cout<<value<<" ";
			value = value * (i - z) / (z + 1); // 1 * (2 - 0) / (0 + 1)
		}
		cout <<endl;
    }
    
    
}