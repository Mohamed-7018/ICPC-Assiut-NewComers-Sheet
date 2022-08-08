#include<bits/stdc++.h>
using namespace std;

int index =0;
void print (string num) {
    if(index  == num.size()){
		return;
	}
 
    cout <<num[index] << " ";
    index++;
    return (print(num));
}


int main () {
    int num ;
    cin >> num;
    
    
    for (int i=0; i<num; i++) {
        string n;
        cin>>n;
        
        print (n);
        cout<<endl;
        index=0;
    }
}