#include <stdio.h>
#include<string.h>

int main(void) {
int n,rem,c=0;
scanf("%d",&n);
 while (n > 0)  
    { 
        int rem = n % 10; 
        if (rem % 2 == 0) 
             c++;
        else
            printf("%d ",rem); 
        n = n / 10; 
    } 
	
	return 0;
}
