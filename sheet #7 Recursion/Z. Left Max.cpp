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

int n,num,maxLeft;
void print (int index) {
    cin >>  num;
    if (index == n) return;


    if (index == 0) {
        cout << num << " ";
        maxLeft = num;
    }
    else {
        if (maxLeft <  num) {
            cout <<  num << " ";
            maxLeft = num;
        }else {
            cout << maxLeft << " ";
        }
    }
    return print(index+1);
}

int main() {
    cin >>  n;
    print(0);
}