#include <stdio.h>

int main(void) {
	int str[10];
	int i=0;
	int max=str[0];
	for (i=0;i<9;i++)
	{
		scanf("%d",&str[i]);
	}
	for(i=0;i<9;i++)
	{
		if(str[i]>max)
		{
			max=str[i];
		}
	}
	printf("%d",max);
	return 0;
}
