#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{

        int n;
        cin>>n;

        vector<int> score(n);
        for(int i=0;i<n;i++){
                cin>>score[i];
        }

        int i = 0;
        int j = n-1;
        int sereja=0,dima=0;
        bool sturn = 0 , dturn = 1;
        while(i<=j){
                if(score[i] > score[j]){
                        if(sturn == 0){
                                sereja += score[i];
                        }else{
                                dima += score[i];
                        }
                        i++;
                        sturn = !sturn;
                        dturn = !dturn;
                }else{
                        if(sturn == 0){
                                sereja += score[j];
                        }else{
                                dima += score[j];
                        }
                        sturn = !sturn;
                        dturn = !dturn;
                        j--;
                }
        }

        cout<<sereja<<" "<<dima<<endl;
}