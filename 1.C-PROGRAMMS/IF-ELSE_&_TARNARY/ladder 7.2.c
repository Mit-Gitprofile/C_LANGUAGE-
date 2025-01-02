/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    
    printf("enter any number:");
    scanf("%d",&a);
    
    if(a>0){
        printf("This number is Positive");
    }
    else if(a<0){
        printf("This number is nagative");
    }
    else{
        printf("this number is zero");
    }

    return 0;
}