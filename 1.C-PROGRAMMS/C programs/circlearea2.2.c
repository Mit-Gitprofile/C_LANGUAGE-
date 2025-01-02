/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float r,ar;
    float pi=3.14;
    
    printf("enter r:");
    scanf("%f",&r);
    
    ar=pi*r*r;
    printf("area of circle is:%f",ar);

    return 0;
}