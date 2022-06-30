#include <iostream>
#include <string>

using namespace std;

int main()
{
   int a, b;
   cin >> a >>b;
   int limak = 0;
   int bob =0;
   int year = 0;


   while (a <= b) {
    a= a*3;
    b = b*2;
     year++;
   }


   cout <<year;
   return 0;
}