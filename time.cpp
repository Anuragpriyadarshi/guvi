#include <iostream>
using namespace std;

int main() {
	int m,h,tmp;
	cin>>m;
	if(m<60)
	{
		cout<<0<<" "<<m;
	}
	else
	{
		h=m/60;
		tmp=m%60;
		cout<<h<<" "<<tmp;
		
	}
	return 0;
}
