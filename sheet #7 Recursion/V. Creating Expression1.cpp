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
ll target;
ll arr[21];

bool  creatingExpression (ll index, ll sum){
    if(index == n) return  sum==target;
    bool  plusWay = creatingExpression(index+1,sum+arr[index+1]);
    bool  minusWay = creatingExpression(index+1,sum-arr[index+1]);
    return  plusWay || minusWay;

}

int main() {
    cin >>  n  >> target;
    for (int i=0; i<n; i++) cin>>arr[i];

   if (creatingExpression(0,arr[0])) cout << "YES";
   else cout << "NO";
}