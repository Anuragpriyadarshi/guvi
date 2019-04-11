#include <stdio.h>

int main(void) {
	int m,n;
	int str[30];
	int i;
	int flag=0;
	scanf("%d",&m);
	scanf("%d",&n);
		for(i=0;i<=m;i++)
	scanf("%d",&str[i]);
	for(i=0;i<=m;i++)
	{
		
	 if(str[i]==n)
		{
		 flag=flag+1;
		}
		
		
	}
	if(flag>=1)
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
