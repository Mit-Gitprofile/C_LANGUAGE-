

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

   printf("D=");
   scanf("%d",&d);
   
   printf("E=");
   scanf("%d",&e);
   
   (a>b&&a>c&&a>d&&a>e)?printf("A is max"):((b>c&&b>d&&b>e)?printf("B is max"):(c>d&&c>e)?printf("C is max "):(d>e)?printf("D is max"):printf("E is max"));

    return 0;
}