#include <stdio.h>

int main(void) {
	char r;
	scanf("%c",&r);
	 if (r == 'I') 
        printf("1");
    if (r == 'V') 
        printf("5");
    if (r == 'X') 
        printf("10");
    if (r == 'L') 
        printf("50");
    if (r == 'C')
       printf("100");
    if (r == 'D')
        printf("500");
    if (r == 'M') 
        printf("1000");
	return 0;
}
