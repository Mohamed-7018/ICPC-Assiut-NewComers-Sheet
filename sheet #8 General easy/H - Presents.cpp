#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,b;
    cin>>n;

    int p[n];
    for (int i=1; i<=n; i++) {
        cin >> b;
        p[b] = i;
    }

    for (int i=1; i<=n; i++){
        cout << p[i]<<" ";
    }
}