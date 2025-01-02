/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float c,f;
    
    
    printf("enter celsius:");
    scanf("%f",&c);
    
    f= ((9.0 / 5.0) * c) + 32.0;
    printf("the tempretur in feranhit is:%f",f);

    return 0;
}