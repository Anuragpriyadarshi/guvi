#include <stdio.h>

int main(void) {
	char str[30];
	int n;
	int i;
	gets(str);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
