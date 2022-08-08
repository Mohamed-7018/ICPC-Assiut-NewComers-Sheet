#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int size,int index){
    if(index > size - 1){
    	return;
	}	
	print(arr,size,index+2);
	cout<<arr[index]<<" ";
}

int main() {
	int count;
	cin>>count;
	
	int arr[count];
	for(int i=0;i<count;i++){
		cin>>arr[i];
	}
	print(arr,count,0);
}