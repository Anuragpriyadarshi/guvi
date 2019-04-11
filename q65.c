#include <stdio.h>

int main(void) {
char a[200];
scanf("%[^\n]s",a);
if(printf("%s",a))
	return 0;
}
