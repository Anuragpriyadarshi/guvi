#include <stdio.h>

int main(void) {
	char a[100];
	int count=0,i,j,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
		}
	}
	if(count>0)
	{
		printf("No");
	}
	else
	printf("Yes");
	return 0;
}
