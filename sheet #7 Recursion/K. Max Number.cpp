#include<iostream>
using namespace std;

int num;
int mx=-(1e9+2);

void max ( int arr[]){
    if (num ==0) return;
    
    mx = max(mx,arr[--num]); 
	max(arr); 
}

int main() {
  cin >> num;
  
  
  int arr[num];
  for (int i=0; i<num; i++) cin >>arr[i];
  max(arr);
  cout <<mx;
}