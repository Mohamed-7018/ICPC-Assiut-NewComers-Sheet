/**
 *    author:  mohamedkhalilalmasri - Mohamed Samir Salem
 *    created at: 2022-12-05  09:32:25+02:00
**/

#include <bits/stdc++.h>
//#define  LOCAL
using namespace std;

//#include "debug.hpp"

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) 42
#endif

//#define endl '\n'


//#define ll  long long
using ll = long long;
#define ld  long double
#define ull unsigned long long int


#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>
#define sz(s)    (int)(s.size())
#define mll map<ll,ll>

template<typename T> using vc = vector<T>;
template<typename T> using vvc = vector<vc<T>>;
template<typename T> using vvvc = vector<vvc<T>>;
#define vi  vector<int>
#define vs  vector<string>
#define  vvs vector < vector < string >>
#define vl  vector<long long>
#define vps  vector<pair<string, string>>
#define vpl  vector<pair<ll, ll>>
#define vpsi  vector<pair<string, int>>
#define vpsl  vector<pair<string, ll>>
#define  um un_orderedmap


#define pii pair<int, int>
#define pll pair << ll, ll>


#define fi first
#define se second


#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define eb emplace_back


#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define si  set<int>
#define sl  set<ll>
#define mk  make_pair

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))

#define F(I, S, E)  for (int I = S; I < E; I++)
#define RF(I, S, E)  for (int I = S; I > E; I--)


#define input(a, n)            \
    for (ll I = 0; I < n; I++) \
    {                          \
        cin >> a[I];           \
    }
#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define PYes cout << "Yes\n"
#define PNo cout << "No\n"
#define Pyes cout << "yes\n"
#define Pno cout << "no\n"

#define PImpossible cout << "Impossible\n"
#define PInfinity cout << "Infinity\n"
#define Pinfinity cout << "infinity\n"


#define show(C)           \
    for (auto J : C)      \
        cout << J << " "; \
    cout << endl;

template<class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}

template<class T>
bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}


#define TEST                                                                                                                                                   \
    int(testcases);                                                                                                                                            \
    cin >> testcases;\
    while(testcases--)


#define TEST1 \
    int(testcases); \
    testcases = 1;  \
    while(testcases--)


ll mypow(ll x, ll n) {
    ll result = 1;
    while (n > 0) {
        if (n % 2 == 1) result = result * x;

        x = x * x;
        n = n / 2;
    }

    return result;
}

void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}


/// check palindromes
bool check ( string s) {
    F(i,0,sz(s)/2 - 1){
        if (s[i] == s[sz(s) - 1-i] ||
        (s[i]=='?' && s[sz(s)-1-i] != '?') ||
                (s[i]!='?' && s[sz(s)-1-i] == '?')
        ){

        }else if (s=="?") {

        }else {
            return  false;
        }
    }

    return true;
}

/// main function
void solve() {
  string s;
  cin >> s;

if (s=="?") {
    cout << "a" <<endl;
}else {
    if (check(s)) {
        F(i,0,sz(s)/2+1) {
            if (s[i] == '?' && s[sz(s)-1-i] !='?') s[i] = s[sz(s)-1-i];
            else if (s[i] != '?' && s[sz(s)-1-i] =='?') s[sz(s)-1-i] =s[i] ;
            else if (s[i] == '?' && s[sz(s)-1-i] =='?') s[i] ='a',s[sz(s)-1-i]='a';
        }
        cout<<s <<endl;
    }else {
        cout<< -1 << endl;
    }
}
}


int main() {
    begin();

    TEST1 {
        solve();

    };

    return 0;

}





//class Graph {
//public:
//    map < int,bool> visited;
//    map < int,list<int>> adj;
//    void  addEdge (int v, int w);
//    void DFS (int v);
//};
//
//void Graph ::addEdge(int v, int w) {
//    adj[v].push_back(w);
//}
//
//void Graph :: DFS (int v) {
//    visited[v] = true;
//
//    list<int> :: iterator  i;
//    for (i= adj[v].begin(); i !=adj[v].end(); ++i) {
//        if (!visited[*i]){
//            DFS (*i);
//        }
//    }
//}
//bool compare(string a, string b) {
//    if (a.size() == b.size()) {
//        return a < b;
//    }
//    return a.size() < b.size();
//}

//*----------------------------------------------------------------------------*//
//*----------------------------------   GCD ------------------------------------//
//*----------------------------------------------------------------------------*//

//long long gcd(long long a, long long b )
//{
//    if (a==0)return b;
//    if (b==0) return a;
//    if (a==b)return a;
//    if (a>b)return gcd(a%b,b);
//    return gcd(a,b%a);
//
//}
//bool check (vl v) {
//   ll f[n+1];
//    F(i,0,n+1) {
//        f[i] =0 ;
//    }
//   F(i,0,n) {
//       f[v[i]] ++;
//   }
//    sort(f, f+n+1, greater<int>());
//    cout<< f[0];
//    if (f[0]  > 1 ) return false;
//    else return true;
//}
//
//

//*----------------------------------------------------------------------------*//
//*------------------- compare between length of two strings ------------------*//
//*----------------------------------------------------------------------------*//

//bool cmp(string &a,string &b){
//    return a.size()<b.size();
//}





/*
g++ -o hello hello.cpp
./hello
*/