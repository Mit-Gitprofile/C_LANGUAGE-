

#include <stdio.h>

int main()
{
   int a,b,c,d,e;
   
   printf("A=");
   scanf("%d",&a);
   
   printf("B=");
   scanf("%d",&b);

   printf("C=");
   scanf("%d",&c);

  
   
   (a>b&&a>c)?printf("A is max"):((b>c)?printf("B is max"):printf("C is max "));

    return 0;
}