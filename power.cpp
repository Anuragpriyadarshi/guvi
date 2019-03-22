#include <iostream>
using namespace std;
int main()
{ 
   int x;
   int y;
   int i,power=1;
   cin>>x >>y;
   if(y == 0)
      return 1;
   for(i=1;i<=y;i++)
      power=power*x;
   cout<<power;
   return 0;

} 
