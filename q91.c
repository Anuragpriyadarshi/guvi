#include <stdio.h>

int main(void) {
	int l,b,h,area,volume;
	scanf("%d %d %d",&l,&b,&h);
	area=2*(l*b+b*h+l*h);
	volume=l*b*h;
	printf("%d %d",area,volume);
	return 0;
}
