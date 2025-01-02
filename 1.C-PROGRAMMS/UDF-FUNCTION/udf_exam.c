          //  U D F  //

//Q.1 Calculator

//Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
//using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
//is pressed.

#include <stdio.h>

int sum(int a,int b) //sum function for sum of number
{
    
    int c;
    
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    
    c=a+b;//sum of a&b
    
    printf("sum of %d and %d is:%d",a,b,c);//print sum
    
}

//------------------------------------------------------------------------------

int sub(int a,int b)//sub function for substraction of number
{
    
    int c;
    
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    
    c=a-b;//substraction of a&b
    
    printf("substract of %d and %d is:%d",a,b,c);//print substraction
    
}

//------------------------------------------------------------------------------

int mul(int a,int b)//mul function for multiplication of number
{
    
    int c;
    
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    
    c=a*b;//multiplication of a&b
    
    printf("muiltiplication of %d and %d is:%d",a,b,c);//print multiplication
    
}

//------------------------------------------------------------------------------

int dev(int a,int b)//dev function for devision of number
{
    
    int c;
    
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    
    c=a/b;//devision of a&b
    
    printf("devision of %d and %d is:%d",a,b,c);//print devision
    
}

//------------------------------------------------------------------------------

int square(int a)//square function for square of number
{
    
    int c;
    
    printf("Enter the number:");
    scanf("%d",&a);
   
    
    c=a*a;//square of a
    
    printf("square of %d is:%d",a,c);//print square
    
}

//------------------------------------------------------------------------------

int main()
{
   int a,b;
   int i,choise;
   
   printf("Press 1 for +\n");
   printf("Press 2 for -\n");
   printf("Press 3 for *\n");
   printf("Press 4 for /\n");
   printf("Press 5 for square\n");
   printf("Press 0 for exit\n");
   
   do
   {
        printf("\n\nEnter your choice:");
        scanf("%d",&choise);
        
        switch(choise)//take switch case for meatching functions
        {
            case 1:
                sum(a,b);
                break;
                
            case 2:
                sub(a,b);
                break;
                
            case 3:
                mul(a,b);
                break;
                
            case 4:
                dev(a,b);
                break;
                
            case 5:
                square(a);
                break;
                
            case 0:
                return 0;
                break;
                
            default:
                printf("invelid choise:");                                                                         
        }
   }
   while(1);

    return 0;
}








