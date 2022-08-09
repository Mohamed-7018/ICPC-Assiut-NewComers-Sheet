#include<iostream>
using namespace std;


int input;
long long fact (int num) {
    if (num <=1) return 1;
    return num*fact(num-1);
}

int main() {
  long long num;
  cin >> num;
  cout <<fact (num);

}