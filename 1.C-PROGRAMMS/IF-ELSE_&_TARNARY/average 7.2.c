/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   float gujrati,hindi,maths;
   float average;
   
   printf("enter marks of gujrati:");
   scanf("%f",&gujrati);
   
   printf("enter marks of hindi:");
   scanf("%f",&hindi);
   
   printf("enter marks of maths:");
   scanf("%f",&maths);
   
   average=(gujrati+hindi+maths)/3;
   
   printf("total average is :%f",average);

    return 0;
}