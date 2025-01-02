/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int fa,sa,tt;
    
    
    printf("enter first engle:");
    scanf("%d",&fa);
    
    printf("enter second engle:");
    scanf("%d",&sa);
    
    tt=180-fa-sa;
    printf("third engle is:%d",tt);

    return 0;
}