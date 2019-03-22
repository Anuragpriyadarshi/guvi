#include <iostream>
using namespace std;

int main() {
	int n;
	int sum=0;
	cin>>n;
	while(n>0)
	{
		n=n/10;
		sum++;
	}
	cout<<sum;
	return 0;
}
