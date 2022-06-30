#include <iostream>
#include <string>
#include<algorithm>


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d, sum =0 , times=0;

cin >>n>>b>>d;

for (int i=0; i<n ; i++) {
    int x;
    cin >>x;

    if (x>b) {
        continue;
    }
    else{
        sum +=x;
        if(sum>d) {
            times++;
            sum=0;
        }
    }

}
cout <<times;
}


