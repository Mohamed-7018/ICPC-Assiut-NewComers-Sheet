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

    string sen,temp;
    int counter = 0;
    getline(cin , sen);

    for (int i=0; i<sen.size(); i++) {
        if(sen[i] != 32& sen[i] != '!' && sen[i] != '.' && sen[i] != '?' && sen[i] != ','){
            temp+=sen[i];
        }
        if((sen[i] == 32 || sen[i] == '!' || sen[i] == '.' || sen[i] =='?' || sen[i] == ',' || i == sen.size() - 1)&& temp.size() != 0){
            counter++;
            temp = "";
        }
    }

    cout <<counter;

    return 0;

}





// g++ -o hello hello.cpp
// ./hello