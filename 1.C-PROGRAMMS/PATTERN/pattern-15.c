// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int i,j,k;
  
  for(i=1;i<=5;i++)
  {
      k=5;
      for(j=1;j<=9;j++)
      {
          if(j>=6-i && j<=4+i)
          {
            if(j<=5)
            {
                printf("%d",j);
            }
            else
            {
                printf("%d",10-j);
            }
          }
          else
          {
              printf(" ");
          }
         
      }
      printf("\n");
       i<5?k--:k++;
  }
    return 0;
}