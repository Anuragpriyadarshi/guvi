#include <stdio.h>

int main(void) {
	int n,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		int digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
