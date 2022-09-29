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

    int size;
    cin >> size;
    string word;
    cin >> word;

    int score = 0;
    for (int i = 0; i < sz(word); i++) {
        if (word[i] == 'V') {
            score += 5;
        }
        else if (word[i] == 'W') {
            score += 2;
        }
        else if (word[i] == 'Z') {
            if (i != word.size() - 1) {
                if (word[i + 1] == 'W') {
                    score /= 2;
                    word[i + 1] = '0';
                } else if (word[i + 1] == 'V') {
                    score /= 5;
                    word[i + 1] = '0';
                }
            }
        }
        else if (word[i]  == 'Y') {
            if(i != word.size() - 1){
                word.push_back(word[i+1]);
                word[i+1] = '0';
            }
        }
        else if (word[i] == 'X') {
            if(i != word.size() - 1){
                word[i+1] = '0';
            }
        }
    }

    cout << score;


    return 0;

}





// g++ -o hello hello.cpp
// ./hello