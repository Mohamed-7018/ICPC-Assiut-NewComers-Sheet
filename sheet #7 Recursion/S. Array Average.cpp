#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vs  vector<string>
#define vp  vector<pair<string, string>>
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define ss  set<string>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>

int n;
double sum = 0;
double averageArray (int index, double arr[]){
    if (index == n) return  sum/n;

    sum = sum+arr[index];
    return averageArray(index+1,arr);
}

int main() {
   cin >> n;
   double arr[n];

   for (int i=0; i<n; i++) {
       cin >> arr[i];
   }

   cout << fixed <<setprecision(6) << averageArray(0,arr);
    return 0;
}