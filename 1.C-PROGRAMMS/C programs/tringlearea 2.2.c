/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float h,b,bh;
    
    printf("enter hight:");
    scanf("%f",&h);
    printf("enter base:");
    scanf("%f",&b);
    
    bh=0.5*b*h;
    printf("area of tringle is:%f",bh);

    return 0;
}