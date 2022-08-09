#include<iostream>
using namespace std;

int num;
long long s=0;

void sum ( long long arr[]){
    if (num ==0) return;
    
    s += arr[--num]; 
	sum(arr); 
}

int main() {
  cin >> num;
  
  
  long long arr[num];
  for (int i=0; i<num; i++) cin >>arr[i];
  
  sum(arr);
  cout <<s;
}