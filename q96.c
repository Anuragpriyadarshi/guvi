#include <stdio.h>

int main(void) {
	int a,d,n,sum=0;
	scanf("%d %d %d",&a,&d,&n);
sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
    
	printf("%d",sum);
	return 0;
}
