               //  U D F //

// Q-1. 

//Write a Program to find the cube of a given number using UDF.

#include <stdio.h>
void cube(int a,int b)
{
    printf("enter any number:");
    scanf("%d",&a);
    b=a*a*a;
    printf("cube is:%d",b);
    
}
void main()
{
    int a, b;
    
    cube(a,b);
 
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

// Q-2. 

//Write a Program to check if a given number is divisible by both 3 & 5 or not using udf

#include <stdio.h>
void check(int a)
{
    printf("enter any number:");
    scanf("%d",&a);
    
  if((a%3==0)&&(a%5==0))
  {
      printf("The given number is divisible by both 3 & 5.");
  }
  else if(a%3==0)
  {
      printf("The given number is divisible by  3 .");
  }
  else if(a%5==0)
  {
      printf("The given number is divisible by  5 .");
  }
  else
  {
      printf("The given number is not divisible");
  }
}

void main()
{
    int a;
    check(a);
}