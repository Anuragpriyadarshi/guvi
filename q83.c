#include <stdio.h>

int main(void) {
	char operator;
    int x,y;
    scanf("%d",&x);
    scanf("%c",&operator);
    scanf("%d",&y);
    switch(operator)
    {
    	 case '/':
            printf("%d", x / y);
            break;
         case '%':
             printf("%d",x % y);
             break;
    }
	return 0;
}
