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

    int row,column, counter=0;
    cin >> row >> column;

    int rowArray[row] ,  columnArray [column];

    for (int i=0; i< row; i++) rowArray[i] = 0;
    for (int i=0; i< column; i++) columnArray[i] =0;

    for (int i =0; i< row ; i++) {
        string line;
        cin >> line;

        for (int j =0; j<column; j++) {
            if (line[j] == 'S') {
                rowArray[i] = 1;
                columnArray[j] = 1;
            }
        }
    }


    for (int i=0; i < row; i++)
        for (int j=0; j<column; j++)
            if (rowArray[i] == 0 || columnArray[j] == 0) counter++;


    cout << counter;
    return 0;

}





// g++ -o hello hello.cpp
// ./hello