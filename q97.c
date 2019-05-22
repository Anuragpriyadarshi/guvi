#include <stdio.h>

int main(void) {
	int n,n1,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=rem*10;
		rem=rem+n%10;
		n=n/10;
	}
	printf("%d",rem);
	return 0;
}
