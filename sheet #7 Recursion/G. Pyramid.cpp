#include<iostream>

using namespace std;


int input;
void PyramidPattern(int num) {
if(num == 0){
		return;
	}
	PyramidPattern(num-1);
	for(int i=1;i<=input-num ;i++){
		cout<<" ";
	}
	for(int i=1;i<= num*2 -1;i++){
		cout<<"*";
	}
	cout<<endl;
}

int main() {
  int num;
  cin >> num;
  
  input = num;
  PyramidPattern(num);
  return 0;
}