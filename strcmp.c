#include <stdio.h>

int main(void) {
	char str1[50],str2[50];
	scanf("%s %s",&str1,&str2);
	if(sizeof(str1)>sizeof(str2))
	{
		printf("%s",str1);
	}
	else
	{
		printf("%s",str2);
	}
	return 0;
}
