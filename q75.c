#include <stdio.h>
#include<string.h>

int main(void) {
	int n,m1,m2;
	char a[100];
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
		m1=n/2;
		m2=m1-1;
		a[m1]='*';
		a[m2]='*';
		printf("%s",a);
	}
	else
	{
		m1=n/2;
		a[m1]='*';
		printf("%s",a);
		
	}
	
	return 0;
}
