#include <stdio.h>

int main() 
{
	char string[50];
	int i,count=0;
	scanf("%[^\n]s",string);

	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>='0' && string[i]<='9')
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
