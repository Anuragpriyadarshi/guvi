#include <stdio.h>

int main(void) {
	 char string[100];
   char temp;
   scanf("%s",string);

   int i, j;
   int n = strlen(string);
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   
   printf("%s", string);

	return 0;
}
