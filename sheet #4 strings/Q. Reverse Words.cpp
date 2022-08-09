#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string reverseString(string str)
{


	str.insert(str.end(), ' ');

// 	cout << str <<endl;

	int n = str.length();

	int j = 0;

	for (int i = 0; i < n; i++) {

		if (str[i] == ' ') {
			reverse(str.begin() + j,
					str.begin() + i);

			j = i + 1;
		}
	}


	str.pop_back();

	return str;
}

int main()
{
	string str ;
	getline (cin,str);

	string rev = reverseString(str);

	cout << rev;
	return 0;
}
