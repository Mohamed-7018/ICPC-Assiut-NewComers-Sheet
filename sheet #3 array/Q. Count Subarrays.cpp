
#include <iostream>
using namespace std;
 
int getCount(int arr[], int n)
{
    int count = 0;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j - 1] >= arr[j])
            {
                break;
            }
 
            ++count;
        }
    }
 
    return count;
}
 
int main()
{
    int n;
    cin >>n;
    
    
     for ( int i=0; i<n; i++) {
        int x;
        cin>>x;
        int arr[x];
        for (int j=0; j<x; j++) cin>> arr[j];
        int n2 = sizeof(arr) / sizeof(arr[0]);

        cout << getCount(arr, n2) + n2 << endl;
     
        
        // cout << sum <<endl;
        // sum =0;
    }
 
    return 0;
}
