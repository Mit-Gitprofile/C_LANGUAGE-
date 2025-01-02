          //  STRING  //

// Q-1.

/*Write a Program to check if a given password is strong or not by satisfying the below
criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.
For example,

Input:
Create your password: Admin@123

Output:
Your password is Strong.*/


#include <stdio.h>
#include <ctype.h>


int main()
{
    int i, alpha=0, digit=0, num=0, len;
    
    char a[100];
    printf("Create your password:");
    fgets(a,sizeof(a),stdin);
    
    
    for ( i=0;a[i]!='\0';i++)
    {
        if(isalpha(a[i]))
        {
            alpha=1;
        }
        
        else if(isdigit(a[i]))
        {
            digit=1;
        }
        
        else if(!isalnum(a[i]))
        {
            num=1;
        }
        
        len++;
    }
   
     if(len>=6 && alpha && digit && num)
     {
        printf("Your password is Strong.");
     }
     else
     {
        printf("Error !\n");
        printf("Your password is not Strong.");
     }
     
    return 0;
}
//==============================================================================
//==============================================================================


//Q-2.


/*Write a Program to create a login mechanism by entering the right email & password.
You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456
Output:
Login Successful...
-----------------------------------------
For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456
Output:
Login Failed. Invalid Credentials.*/


#include <stdio.h>
#include <string.h>

int main()
{
   char str[100]={"admin@gmail.com"};
   char pass[10]={"12345678"};
   
   char cstr[100];
   char cpass[10];
   
   printf("Enter your email:");
   fgets(cstr,sizeof(cstr),stdin);
   
   printf("Enter your password:");
   fgets(cpass,sizeof(cpass),stdin);
   
   if(strcmp(str,cstr)&&strcmp(pass,cpass))
   {
       printf("LOGIN SUCCESSFULL....");
   }
   else
   {
       printf("LOGIN FAILED..!!!");
   }
   return 0;
}