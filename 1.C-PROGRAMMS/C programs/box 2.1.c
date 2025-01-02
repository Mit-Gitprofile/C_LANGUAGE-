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
    printf("---------------\n");
    printf("|             |\n");
    printf("(%d+%d):%d\n",a,b,ab);
    printf("|             |\n");
    printf("---------------\n");
    
   
    return 0;
}