#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    int r,c;
    cin>>r;

    c=r;


    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

long long mainsum=0;
long long secsum =0;


 int flag = 0;
  for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if (i==j) mainsum += arr[i][j];
			if (r-1-j ==i) secsum += arr[i][j];
		}
	}

	cout<<abs(mainsum - secsum)<<endl;
    return 0;
}





