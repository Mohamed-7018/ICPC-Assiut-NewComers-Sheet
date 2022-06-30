#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int length;
	string word;
	
    
    cin>>length;
	cin>>word;
	vector<char> output;

    while(length!=0){
		  if(length%2==1){
			  output.push_back(word[0]);
		  }else{
			  output.insert(output.begin(),word[0]);
		  }
		  word.erase(0,1);
		  length=word.length();
	  }
	  
      
      for(int i=0;i<output.size();i++){
		  cout<<output[i];
	  }

	return 0;
}