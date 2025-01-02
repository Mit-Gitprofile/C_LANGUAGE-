           //  STRING  //
    
// Q 1. ---> & Q 2. --->
//UPPERCASE/LOWERCASE

//STRING IN UPPERCASE & LOWERCASE

#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
   char str[100];
   printf("Enter any string without space:"); 
   
   scanf("\n%s",str);
   
   printf("\nUPPERCASE:%s",strupr(str));
   printf("\nLOWERCASE:%s",strlwr(str));
   
   
    return 0;
}


//------------------------------------------------------------------------------
//Q.3
//TOGGLE CASE:

#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
   char str[100];
   
   printf("Enter any string without space:"); 
   scanf("\n%s",str);
  
   printf("\nTOGGLECASE:");
   
   for(int i=0;str[i]!='\0';i++)
   {
	   	
		 if(str[i]>=97 && str[i]<=122)
	   	{
	   		 printf("%c",str[i]-32);
		}
		else if(str[i]>=65 && str[i]<=90)
	   	{
	   		printf("%c",str[i]+32);
		}
   }
   
   
    return 0;
}