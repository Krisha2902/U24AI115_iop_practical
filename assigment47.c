#include<stdio.h>
int main() 
{
  int i, j;
  char alphabet='A';
  for(i=1; i<=5; i++)
  {
    for (j=1; j<=i; j++)
    {
      alphabet = alphabet+j;
      printf("%c ", alphabet-1);
      alphabet='A';
    }
    printf("\n");             
  }
  return 0;
}