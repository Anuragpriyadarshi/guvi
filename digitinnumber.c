#include <stdio.h>

int main(void) {
	int n;
	int count;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count=count+1;
	}
	printf("%d",count);
	return 0;
}
