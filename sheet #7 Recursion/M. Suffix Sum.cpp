#include<iostream>
using namespace std;

int num;
long long s=0;
int last;
int counter =0;

void sum ( long long arr[]){
    if (counter == last ) return;
    
    counter++;
    s += arr[--num]; 
   // cout <<s <<endl;
	sum(arr); 
}

int main() {
  cin >> num>>last;
  
  long long arr[num];
  for (int i=0; i<num; i++) cin >>arr[i];
  
  sum(arr);
  cout <<s;
}