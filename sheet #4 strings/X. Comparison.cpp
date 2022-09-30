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

    begin ()  ;

    string  word;
    cin >> word;

    string subWord = word, part1 = "", part2;
    string output = word;
    for (int i=0; i< sz(word)-1 ; i++) {
        part1 += word[i];
        subWord.erase(0,1);
        part2 = subWord;
        sort (part1.begin() , part1.end());
        sort (part2.begin(), part2.end());
        output = min(output, part1+part2);
    }
    cout << output;
    return 0;
}





// g++ -o hello hello.cpp
// ./hello
