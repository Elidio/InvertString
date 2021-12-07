#include <stdio.h>
#include <string.h>

void invertString(char *string){
  int i = 0;
  int strl = strlen(string);
  char *x, *y;
  for (i = 0; i < strl >> 1; i++){
    x = string + i;
    y = string+strl-i-1;
    if (x != y)
      *x ^= *y;
      *y ^= *x;
      *x ^= *y;
  }
}


int main(void) {
  char test[] = "Hello World";
  invertString(test);
  printf("%s\n", test);
  return 0;
}