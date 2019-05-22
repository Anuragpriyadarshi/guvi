#include <stdio.h>

int main(void) {
	int p,r,t,s;
	scanf("%d %d %d",&p,&r,&t);
	s=floor(p*r*t/100);
	printf("%d",s);
	
	return 0;
}
