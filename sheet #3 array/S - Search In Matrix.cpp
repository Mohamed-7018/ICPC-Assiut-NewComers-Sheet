#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    int r,c;
    cin>>r>>c;


    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

  int target;
  cin >>target;


 int flag = 0;
  for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j] == target){
				flag = 1;
				break;
			}
		}
	}

	(flag ==1)? cout<<"will not take number" : cout<<"will take number";
    return 0;
}





