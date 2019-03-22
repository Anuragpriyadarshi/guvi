#include <iostream>
using namespace std;

int main() {
	int N;
	int K;
	int arr[10];
	int sum=0;
	cin>>N >>K;
	int i;
	for(i=0;i<=N;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<K;i++)
   {
    sum=sum+arr[i];
   }
   for(i=0;i<K;i++)
   {
   }
  cout<<sum;
}
