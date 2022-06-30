#include <iostream>
#include<algorithm>
#include<vector>
#include<string>


using namespace std;

int main () {

   int n,k, ans=0;
   cin>>n>>k;
	vector<string> vect;


   for (int i=0; i<n; i++) {
    string s;
    cin>>s;
    vect.push_back(s);
   }


   for (int i=0; i<n; i++) {
    int value=0;
    for (int j=0; j<=k; j++)
        {
          if(	vect[i].find(to_string(j)) !=-1)
			++value;
        }
    if(value==k+1)
 		++ans;
   }


   cout<<ans<<endl;

}