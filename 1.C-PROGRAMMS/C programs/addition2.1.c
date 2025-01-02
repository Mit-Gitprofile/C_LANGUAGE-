/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,ab=0;
    printf("enter first a:");
    scanf("%d",&a);
    
    printf("enter first b:");
    scanf("%d",&b);

    ab=a+b;
    printf("addition of(%d+%d)is:%d\n",a,b,ab);
    
    ab=a-b;
    printf("substration of(%d-%d)is:%d\n",a,b,ab);
    
    ab=a*b;
    printf("multiplication of(%d*%d)is:%d\n",a,b,ab);
    
    ab=a/b;
    printf("division of(%d/%d)is:%d\n",a,b,ab);
    
    ab=a%b;
    printf("modulo of(%d&%d)is:%d",a,b,ab);
    return 0;
}