#include <iostream>
using namespace std;

int main() {
	int n;
	int a[100];
	int max;
	int i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	cout<<max;
	
	return 0;
}
