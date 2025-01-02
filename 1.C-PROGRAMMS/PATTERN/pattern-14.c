

#include <stdio.h>

int main()
{
   int i,j;
   
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=9;j++)
       {
           if(j>=6-i&&j<=4+i)
           {
              j<=5?printf("%d",j):printf("%d",10-j);
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}