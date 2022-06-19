#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
  int n[3],tr[3];

  for (int i =0; i< 3 ; i++) {
    cin >>n[i];
  }
    for(int i=0 ; i<3; i++) {
        tr[i]=n[i];
    }
    sort(n, n + 3);

    for (int i = 0; i < 3; i++)
        cout << n[i] << "\n";

        cout <<"\n";
   for (int i = 0; i < 3; i++)
        cout << tr[i] << "\n";
    return 0;

}
