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
   
   
   int size,squ,min,counter=0,newArr=1;
   cin >> size >> squ;
   
   
   for (int i=1; i<=size; i++ ) {
     int num;
     cin >> num;
     
     if (newArr) {
       min = num;
       newArr = 0;
      }
     else {
        if (num < min) min =num;
     }
     
     counter++;
     if (counter == squ || i==size){
         cout << min << " ";
         counter = 0;
         newArr = 1;
     }
   }
}


// g++ -o hello hello.cpp
// ./hello
