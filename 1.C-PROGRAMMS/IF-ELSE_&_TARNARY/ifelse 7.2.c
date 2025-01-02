/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    
    printf("enter first value:");
    scanf("%d",&a);
    
    printf("enter second value:");
    scanf("%d",&b);
    
    if(a>b){
        printf("%d is minium",b);
    }
    else{
        printf("%d is minium",a);
    }

    return 0;
}