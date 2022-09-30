#include <bits/stdc++.h>

using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vs  vector<string>
#define vp  vector<pair<string, string>>
#define all(v) v.begin(),v.end()
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>
#define sz(s)    (int)(s.size())


using namespace std;


void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

int main() {

    begin();
    int n;
    cin >> n;

    if (n%2 == 0 ) {
        cout << "NO" ;
        return  0;
    }

    int index = 0;
//    int bi[100];
     vector<int> bi(100);

    while(n != 0){
        bi[index] = n%2;
        n /= 2;
        index++;
    }


    for(int i=0,z=index-1;i<index,z>=0;i++,z--){
        if(bi[i] != bi[z]){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout << "YES" ;

    return 0;

}





// g++ -o hello hello.cpp
// ./hello