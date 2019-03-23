#include <iostream>
using namespace std;

int main() {
	int n;
	int i;
	int fact=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
	return 0;
}
