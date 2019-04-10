#include <stdio.h>

int main() 
{
	char string[50];
	int i;
	int count=0;
	int count1=0;
	int count2=0;
	scanf("%[^\n]s",string);

	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>='0' && string[i]<='9')
		{
			count=count+1;
		}
		else if((string[i]>='a' && string[i]<='z') ||(string[i]>='A' && string[i]<='Z')|| (string[i]==' '))
		{
			count1=count1+1;
		}
	
		else
		{
			count2=count2+1;
		}
		
	}
	printf("\n%d",count2);
	return 0;
}
