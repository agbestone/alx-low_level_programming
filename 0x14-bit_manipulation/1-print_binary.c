#include "main.h"

void print_binary(unsigned long int n)
{
  int i;
  for (i = 8*sizeof(n)-1; i >= 0; i--){
    if(n & (1UL<<i))
      printf("1");
    else
      printf("0");
}
