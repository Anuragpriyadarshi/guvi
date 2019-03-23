#include <iostream>
using namespace std;

int main() {
	int n,a,d,i;
	int sum=0;
	int value;
	cin>>n>>a>>d;
	value=a;
	for(i=0;i<n;i++)
	{
		sum=sum+value;
		value=value+d;
	}
	cout<<sum;
	return 0;
}
