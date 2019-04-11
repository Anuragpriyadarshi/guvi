#include <stdio.h>

int main(void) {
	int m,n;
	int str[30];
	int i;  
	
	int count2=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<=m;i++)
	scanf("%d",&str[i]);
	for(i=0;i<=m;i++)
	{
		
	 if(str[i]==n)
		{
			count2=count2+1;
		}
	}

	
	
	printf("%d",count2);
	
	return 0;
}
