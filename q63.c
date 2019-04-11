#include <stdio.h>

int main(void) {
	int a[10];
	int i;
	int min=a[1];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
