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

int start,target;
int numberOfWays (int num) {
    if (num >= target) {
        return num == target;
    }
    return numberOfWays(num+1) + numberOfWays(num+2) + numberOfWays(num+3);
}

int main() {
    cin >> start >> target;
    cout<<numberOfWays(start);
}