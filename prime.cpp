#include <iostream>
using namespace std;

int main() {
	int n,m,i;
	cin>>n;
	m=n/2;
	int flag=0;
	for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"no"<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "yes"<<endl;  
      return 0;
}
