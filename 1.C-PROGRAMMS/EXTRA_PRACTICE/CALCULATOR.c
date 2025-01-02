
        //=================//
        //   CALCULATOR    // 
        //=================//

#include <stdio.h>
#include<string.h>

int main()
{
   float a,b;
   char ch;
   
   printf("Enter first number:");
   scanf("%f",&a);
   
   printf("Enter second number:");
   scanf("%f",&b);
   
   printf("Enter sign | + | - | * | / | :");
   scanf("%s",&ch);
   
   switch(ch)
   {
       case'+':
            printf("Sum is: %.2f ",a+b);
            break;
            
        case '-':
            printf("Substraction is: %.2f ",a-b);
            break;
            
        case '*':
            printf("Multiplication is: %.2f ",a*b);
            break;
            
        case '/':
            printf("Devision is: %.2f ",a/b);
            break;
   }

    return 0;
}