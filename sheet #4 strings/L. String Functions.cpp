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


    int n,q;
    cin >>n>>q;

    string word;
    cin >> word;

    while(q--) {
        string query;
        cin >>query;

        if (query == "pop_back") {
            word.pop_back();
        }else if (query == "front"){
            cout << word.front() << endl;

        }else if (query == "back" ){
           cout <<  word.back() << endl;

        }else if (query == "sort"){
            int begin , end;
            cin >> begin >> end;
            sort(word.begin()+ min(begin,end) -1
                    ,word.begin()+max(begin,end));

        }else if (query == "reverse"){
            int begin , end;
            cin >> begin >> end;
            reverse(word.begin()+ min(begin,end) -1
                    ,word.begin()+max(begin,end));
        }else if (query == "print"){
            int position;
            cin >> position;
            cout << word[position-1] << endl;

        }else if (query == "substr"){
            int begin , end;
            cin >> begin >> end;
            for(int i = min(begin,end) - 1;i<=max(begin,end)-1;i++){
                cout<<word[i];
            }
            cout << endl;
        }else if (query == "push_back"){
            char  c;
            cin >> c;
            word.push_back(c);
        }

    }
    return 0;

}





// g++ -o hello hello.cpp
// ./hello