#include <stdio.h>

int main(void) {
	char a[100];
	int i,n,x;
	scanf("%s",a);
	scanf("%d",&x);
	n=strlen(a);
	for(i=n-x;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
