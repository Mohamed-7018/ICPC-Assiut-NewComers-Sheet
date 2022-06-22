#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

long long createNumber(int &pos, string s) {
    int i = pos;
    long long number = 0;
    while (isdigit(s[i]))
        number = number * 10 + s[i++] - '0';
    pos = i - 1;
    return number;
}

string llToString(long long a) {
    string x = "";
    bool isMinus = 0;

    if (a < 0)
        isMinus = 1;
    while (a) {
        x += abs(a % 10) + '0';
        a /= 10;
    }
    reverse(x.begin(), x.end());
    if (isMinus)
        x.insert(x.begin(), '-');
    return x;
}

int main() {
    string exp;
    long long res = 0;

    getline(cin, exp);
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '*') {
            bool lMinus = 0, rMinus = 0;
            while (!isdigit(exp[i]))
                i--;

            while (isdigit(exp[i]))
                i--;
            if (i >= 0 && exp[i] == '-' && !isdigit(exp[i - 1]))
                lMinus = 1;
            i++;
            int start = i - lMinus;
            long long l = createNumber(i, exp);
            if (lMinus) {
                l = -l;
            }
            i++;

            while (!isdigit(exp[i]))
                i++;

            if (exp[i - 1] == '-')
                rMinus = 1;
            long long r = createNumber(i, exp);
            if (rMinus)
                r = -r;
            int stop = i;
            long long result = (long long)l * (long long)r;
            for (int j = start; j <= stop; j++)
                exp.erase(exp.begin() + start);
            exp.insert(start, llToString(result));
            i = start;
        }
        else if (exp[i] == '/' ) {
             bool lMinus = 0, rMinus = 0;
            while (!isdigit(exp[i]))
                i--;

            while (isdigit(exp[i]))
                i--;
            if (i >= 0 && exp[i] == '-' && !isdigit(exp[i - 1]))
                lMinus = 1;
            i++;
            int start = i - lMinus;
            long long l = createNumber(i, exp);
            if (lMinus) {
                l = -l;
            }
            i++;

            while (!isdigit(exp[i]))
                i++;

            if (exp[i - 1] == '-')
                rMinus = 1;
            long long r = createNumber(i, exp);
            if (rMinus)
                r = -r;
            int stop = i;
            long long result = (long long)l / (long long)r;
            for (int j = start; j <= stop; j++)
                exp.erase(exp.begin() + start);
            exp.insert(start, llToString(result));
            i = start;
        }

    }
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '-') {
            while (!isdigit(exp[i]))
                i++;
            if (exp[i - 1] == '-' && exp[i - 2] == '-')
                res += createNumber(i, exp);
            else
                res -= createNumber(i, exp);
        } else if (exp[i] == '+') {
            while (!isdigit(exp[i]))
                i++;
            if (exp[i - 1] == '-')
                res -= createNumber(i, exp);
            else
                res += createNumber(i, exp);
        } else if (isdigit(exp[i]))
            res += createNumber(i, exp);
    }
    cout << res;
}
