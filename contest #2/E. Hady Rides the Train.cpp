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
int main()
{

   begin();
   
   ll n;
   cin >> n;
   
   ll row = n/4;
   ll col;
   
   if(row % 2 == 0) col = n %4; 
   else  col = 3-(n%4); 
   
   
   cout <<row << " " << col;
	
   
   
}


// g++ -o hello hello.cpp
// ./hello
