#include <stdio.h>

int main(void) {
	char str[30];
	int i;
	int flag=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='A' || str[i]=='e' ||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
		{
			flag=flag+1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	printf("no");
	
	return 0;
}
