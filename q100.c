#include <stdio.h>

int main(void) {
	int n,prod=1,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		prod=prod*rem;
		n=n/10;
	}
	printf("%d",prod);
	return 0;
}
