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


int row, column;
int arr1[100][100], arr2[100][100], result[100][100];



void sum(int r, int c) {
    if (r == row || c == column) return;

    if (c < column - 1) sum(r, c + 1);
    else sum(r + 1, 0);

    result[r][c] = arr1[r][c] + arr2[r][c];
}

int main() {
    cin >> row >> column;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr2[i][j];
        }
    }

    sum(0, 0);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << result[i][j] << " ";
        }
        cout<<endl;
    }

}