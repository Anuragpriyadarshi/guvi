#include <stdio.h>

int main(void) {
    long int num;

scanf("%ld",&num);

int count = 0;

while(num != 0){

int val = num % 10;

if((val != 1) && (val != 0)){

count++;

break;

}

num = num / 10;

}

if(count > 0)

printf("no");

else

printf("yes");

return 0;

}
