#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double R,A;
    cin >> R;
    A = 3.141592653 * R * R;
    cout << fixed << setprecision(9) << A << endl;
    return 0;
}