#include <iostream>
using namespace std;

int main() {
	 char text[100];
  int begin, middle, end, length = 0;
 
  scanf("%s",text);
 
  while (text[length] != '\0')
    length++;
 
  end = length - 1;
  middle = length/2;
 
  for (begin = 0; begin < middle; begin++)
  {
    if (text[begin] != text[end])
    {
      printf("no");
      break;
    }
    end--;
  }
  if (begin == middle)
    printf("yes");
	
	return 0;
}
