  // MIT (NAME)

#include <stdio.h>

int main()
{
   int i,j;
   
   for(i=1;i<=7;i++)
   {
       for(j=1;j<=19;j++)
       {
           if(j==7||j==1||(i==2&&j==2)||(i==3&&j==3)||(i==4&&j==4)||(i==3&&j==5)
           ||(i==2&&j==6)||j==11||(j==10&&i==1)||(j==9&&i==1)||(j==12&&i==1)
           ||(j==13&&i==1)||(j==10&&i==7)||(j==9&&i==7)||(j==12&&i==7)||(j==13&&i==7)
           ||j==17||(j==16&&i==1)||(j==15&&i==1)||(j==18&&i==1)||(j==19&&i==1))
           {
                printf("*");
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