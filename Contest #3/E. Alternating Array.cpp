#include <bits/stdc++.h>

using namespace std;
#define ll  long long
#define ld  long double
#define mk  make_pair
#define vi  vector<int>
#define vs  vector<string>
#define vp  vector<pair<string, string>>
#define vl  vector<long long>
#define pqi priority_queue<int>
#define qi  queue<int>
#define sc  set<char>
#define ss  set<string>
#define si  set<int>
#define pii pair<int, int>
#define psv pair<string, vector<int>>
#define mci map<char,int>
#define msv map<string,vector<string>>


void begin () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

ll sum (ll num) {
    return (num*(num+1))/2;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    int arr2[size];
    for(int i=0;i<size;i++){
        int value;
        cin>>value;
        arr[i] = value;
        arr2[i] = value;
    }
    int temp = 0;
    int counter = 0;
    int temp2 = 0;
    int counter2 = 1;
    arr2[0] *= -1;
    for(int i=0;i<size;i++){
        if(i == 0){
            temp = arr[i];
            temp2 = arr2[i];
        } else {
            if((temp > 0 && arr[i] > 0) || (temp < 0 && arr[i] < 0)){
                arr[i] *= -1;
                counter++;
            }
            if((temp2 > 0 && arr2[i] > 0) || (temp2 < 0 && arr2[i] < 0)){
                arr2[i] *= -1;
                counter2++;
            }
            temp = arr[i];
            temp2 = arr2[i];
        }
    }
    if(counter < counter2){
        cout<<counter<<endl;
    } else {
        cout<<counter2<<endl;
    }

}


// g++ -o hello hello.cpp
// ./hello