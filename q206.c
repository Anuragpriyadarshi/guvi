#include <stdio.h>
#include<string.h>

int main(void) {
	char a[100],tmp;
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i=i+2)
	{
		 tmp = a[i];
     a[i] = a[i+1];
     a[i+1] = tmp;
	}
	printf("%s",a);
	return 0;
}
