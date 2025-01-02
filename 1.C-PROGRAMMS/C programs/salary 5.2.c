/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sal,hra,da,ta,tt;
    
    
    printf("enter salary:");
    scanf("%d",&sal);
    
    printf("enter HRA:");
    scanf("%d",&hra);
    
    printf("enter DA:");
    scanf("%d",&da);
    
    printf("enter TA:");
    scanf("%d",&ta);
    
    tt=sal+hra+da+ta;
    printf("gross sallery is:rs.%d",tt);

    return 0;
}