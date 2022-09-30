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

int res[10000005];
int main()
{

   begin();
   
   
   ll t;
   cin >> t;
   
   
   ll cou =0;
   for (int i=0; i<t; i++){
     ll num1, num2;
     cin >> num1 >> num2;
     

     
     if (sum(num1)  <  num2){
       cout << -1;
     }
     else {
       ll sum=0;
       for (int j=num1;j>=1;j--){
         if (sum + j <=num2) {
           sum+=j;
           res[cou] = j;
           cou++;
         }
         if (sum == num2) {
            break;
         }
       }
       
     }
     
     for (int j=0; j<cou;j++) cout << res[j] << " ";
     cout <<endl;
     
     cou =0;
   }

   
   
}


// g++ -o hello hello.cpp
// ./hello
