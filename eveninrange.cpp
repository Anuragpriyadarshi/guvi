#include <iostream>
using namespace std;

int main() {
	int i;
	int a;
	int b;
	cin>>a >>b;
	for(i=a+1;i<b;i++)
	{
		if(i%2==0)
		cout<<" "<<i;
	}
	return 0;
}
