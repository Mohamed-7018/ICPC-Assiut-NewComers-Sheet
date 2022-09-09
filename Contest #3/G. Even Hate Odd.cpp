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


void begin () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

ll sum (ll num) {
    return (num*(num+1))/2;
}

int main(){
   begin();

   int t ;
   cin >>t;

   while (t--) {
       int n;
       cin >> n;

       int numberOfEvens =0, numberOfOdds =0;
       for (int i=0; i< n; i++){
           int num;
           cin >> num;
           if (num%2 == 0) numberOfEvens ++;
           else numberOfOdds++;
       }

       if (numberOfEvens == numberOfOdds) cout <<0<<endl;
       else if (n%2 !=0 ) cout <<-1<<endl;
       else cout << abs(numberOfOdds - numberOfEvens)/2  << endl;
   }
}


// g++ -o hello hello.cpp
// ./hello