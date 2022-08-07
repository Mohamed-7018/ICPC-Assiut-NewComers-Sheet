#include<iostream>

using namespace std;

void PyramidPattern(int n) {
for(int i=0; i<n; ++i){
		for(int j=0; j<n-1-i; ++j){
			cout<<" ";
		}
		for(int j=0; j<2*i+1; ++j){
			cout<<"*";
		}
		cout<<"\n";
	}
}


void PyramidPatternInverse(int n) {
for(int i=n-1; i>=0; --i){
		for(int j=0; j<n-1-i; ++j){
			cout<<" ";
		}
		for(int j=0; j<2*i+1; ++j){
			cout<<"*";
		}
		cout<<"\n";
	}
}


int main() {
  int num;
  cin >> num;
  PyramidPattern(num);
  PyramidPatternInverse(num);
  return 0;
}