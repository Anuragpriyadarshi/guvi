#include <iostream>
using namespace std;
double findMedian(int a[], int n) 
{
 if (n % 2 != 0) 
       return (double)a[n/2]; 
      
    return (double)(a[(n-1)/2] + a[n/2])/2.0; 
}

int main() {
	int n;
	int a[100];
	int i,j,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<< findMedian(a, n);
	return 0;
}
