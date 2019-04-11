#include <stdio.h>

int main(void) {
	int n,m,sub;
	scanf("%d %d",&n,&m);
	sub=abs(n-m);
	if(sub%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
