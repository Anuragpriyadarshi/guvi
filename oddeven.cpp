#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
    if(n<0)
    {
    	cout<<"invalid";
    }
   else if((n%2)==0)
   {
   	cout<<"Even";
   }
   else
   {
   	cout<<"Odd";
   }

	return 0;
}
