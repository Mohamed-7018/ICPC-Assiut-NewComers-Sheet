#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
int in,days,years,months;

cin>>in;
years = in/365;
months = (in%365)/30;
days = ((in%365)%30);


cout << years << " years"<<endl;
cout << months << " months" <<endl;
cout << days << " days"<<endl;


}
