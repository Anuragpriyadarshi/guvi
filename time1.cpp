#include <iostream>
using namespace std;

int main() {
	int h1,h2,m1,m2;
	int r1=0;
	int r2=0;
	cin>>h1>>m1>>h2>>m2;
	r1=abs(h1-h2);
	r2=abs(m1-m2);
	cout<<r1<<" "<<r2;
	return 0;
}
