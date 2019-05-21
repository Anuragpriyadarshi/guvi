#include <stdio.h>
#include<math.h>

int main(void) {
	int n,m,x,y;
	float p;
	scanf("%d %d",&n,&m);
	x=n*m;
	p=sqrt(x);
	y=p;
	if(y==p)
	{
		printf("yes");
	}
	else
	printf("no");
	
	
	return 0;
}
