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


int main()
{

   begin();
   
   int n;
   cin >> n;
   
   for (int i =0; i< n; i++ ){
      for (int j =0; j<n; j++ ) {
         if (i == n/2 && i==j) cout << "X";
         else if (i == j) cout<<"\\"; 
         else if ( j!= n/2 && i == (n-1)-j) cout << "/";
         else cout<<"*";
      }
      cout << endl;
   }
}


// g++ -o hello hello.cpp
// ./hello
