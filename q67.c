#include <stdio.h>
#include<math.h>
int main(void){
	float n;
	int x;
	scanf("%f",&n);
	n=n/10;
	x=ceil(n);
	x=x*10;
	printf("%d",x);
	return 0;
}
