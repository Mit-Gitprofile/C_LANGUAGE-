//-------------------------------------------------------------------------------------------------------------------------------------------

//question:-1 tempreture converter

#include <stdio.h>

int main() {
    float deg,f;
    
    //take tempreture  Celsius from user
    
    printf("The temperature in Celsius:");
    scanf("%f",&deg);
    
    //convert tempreture celsius to fahrenheit
    
    f=( 1.8 *deg) + 32;
    printf("The temperature in Fahrenheit:%.2f",f);

    return 0;
}


//--------------------------------------------------------------------------------------------------------------------------------------------------------


//Q.2 Gross Salary Calculator
#include <stdio.h>

int main() {
 int sal,total,hra=10,da=5,ta=8;
 
 //take base salary from user
 printf("Base Salary:");
 scanf("%d",&sal);
 
 //calculates the gross salary by adding percentages of hra, da, and ta
 total=sal+(hra+da+ta);
 printf("Gross Salary:%d",total);
 
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------



//Q.3 Triangle Angle Finder
#include <stdio.h>

int main() {
   int first,second,third;
   
   //take first and second angles value from user
   printf("First angle:");
   scanf("%d",&first);
   printf("Second angle:");
   scanf("%d",&second);
   
   //calculate first and second angles and find third angle
   third=180-first-second;
   printf("Third angle:%d",third);
   
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------