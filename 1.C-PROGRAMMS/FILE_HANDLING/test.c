
#include<stdio.h>
int main() 
{

  FILE* fptr;

  fptr = fopen("test.txt", "w");

  fputs("hello world!\n", fptr);
  fputs("this file is written file", fptr);

  fclose(fptr);

  return 0;
}