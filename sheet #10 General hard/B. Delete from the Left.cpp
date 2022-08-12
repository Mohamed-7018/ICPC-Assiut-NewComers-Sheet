#include <iostream>
using namespace std;
#include<stack>


int main() {
    string s,t;
    cin >> s >> t;


    stack<char> s1;
    stack<char> t1;

    for (int i=0; i<s.size(); i++) {
        s1.push(s[i]);
    }

    for (int i=0 ; i<t.size(); i++) {
        t1.push(t[i]);
    }

    while (!s1.empty()  && !t1.empty()) {
        if (s1.top() != t1.top()) break;
        s1.pop();
        t1.pop();
    }

    cout << s1.size() + t1.size();
}
