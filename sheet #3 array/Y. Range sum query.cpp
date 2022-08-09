#include <iostream>
using namespace std;
 
 
 
 long long rangeSum(long long i, long long j, long long sum[]) {
   if (i == 1)
      return sum[j-1];
   return sum[j-1] - sum[i - 2];
}
 
int main () {
    long long n,q;
    cin>>n >> q;
    
    
    long long a[n], sum[n];
    for (long long i=0; i<n; i++) {
        cin >> a[i];
    }
    sum[0] = a[0];
    // cout << sum[0] <<"------"<<endl;
    for (long long i = 1; i <= n; i++) {
      sum[i] = a[i] + sum[i - 1];
    //   cout <<sum[i] << "------"<< endl;
    }

    //  cout<< rangeSum (1,6,sum);
    for (long long i=0; i<q; i++) {
        long long x,y;
        cin >> x >>y;
        cout<< rangeSum (x,y,sum) <<endl;
    }
}