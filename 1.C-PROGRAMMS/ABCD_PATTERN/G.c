   // G

#include <stdio.h>

int main()
{
   int i,j;
   
   for(i=1;i<=7;i++)
   {
       for(j=1;j<=5;j++)
       {
           if(i==1||i==7||j==1||j==5||i==5)
           {
                   if((i==1&&j==1)||(i==7&&j==1)||(i==1&&j==5)||(i==3&&j==5)||(i==4&&j==5)||(i==5&&j==2)||(i==7&&j==5))
                {  
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
        
           }
           else
           {
               printf(" ");
           }
           printf(" ");
       }
       printf("\n");
   }

    return 0;
}