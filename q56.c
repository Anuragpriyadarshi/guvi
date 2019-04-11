#include <stdio.h>

int main(void) {
	char str[30];
	 int flag1=0;
	int flag2=0;
	int i;
	for(i=0;str!='\0';i++)
	{
	scanf("%s",&str[i]);
	}
	for(i=0;str!='\0';i++)
	{
	 if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
	{
		flag1=flag1+1;
		
	}
	if(str[i]>='0' && str[i]<='9')
		{
			flag2=flag2+1;
		}
	}
	if(flag1>0 && flag2>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
