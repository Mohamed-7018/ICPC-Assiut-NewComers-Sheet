
#include <iostream>
using namespace std;
 
 
 
 int rangeSum(int i, int j, int sum[]) {
   if (i == 1)
      return sum[j-1];
   return sum[j-1] - sum[i - 2];
}
 
int main () {
    int n,q;
    cin>>n >> q;
    
    
    int a[n], sum[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sum[0] = a[0];
    // cout << sum[0] <<"------"<<endl;
    for (int i = 1; i <= n; i++) {
      sum[i] = a[i] + sum[i - 1];
    //   cout <<sum[i] << "------"<< endl;
    }

    //  cout<< rangeSum (1,6,sum);
    for (int i=0; i<q; i++) {
        int x,y;
        cin >> x >>y;
        cout<< rangeSum (x,y,sum) <<endl;
    }
}