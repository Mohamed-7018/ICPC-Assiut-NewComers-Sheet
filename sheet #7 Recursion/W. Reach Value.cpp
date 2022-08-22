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

ll inputNumber;
bool reachNumber (ll num) {
    if (inputNumber < num) return false;
    else if (inputNumber == num ) return  true;
    else return (reachNumber(num*10) || reachNumber(num*20));
}

int main() {
    int n;
    cin >> n;

    for (int i=0; i< n; i++) {
        cin >> inputNumber;
        if (reachNumber(1))  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}