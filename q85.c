#include <stdio.h>
#include<string.h>

int main(void) {
	char a[100] ,even[100], odd[100];
	int i, j, k,n;
	i=j=k=0;
	
	scanf("%s",a);
	n=strlen(a);
	 while (a[i] != '\0') {
                if (i % 2 == 0) {
                        odd[j++] = a[i];
                } else {
                        even[k++] = a[i];
                }
                i++;
        }
        odd[j] = even[k] = '\0';
        printf("%s %s",odd,even);
        
	return 0;
}
