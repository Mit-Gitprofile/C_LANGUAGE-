           // STRING EXAM //

//Q.1 Pelindrome Checker

#include<stdio.h>

int main()
{
    char str[100];//declare string
    int reverce=0,original=1,i;
   
    printf("enter your string:");
    scanf("%s",&str);//take string from user

    for(i=0;str[i]!='\0';i++)//take loop for string length
    {
        reverce++;
    }
     for(i=0;i<reverce/2;i++)//take loop for reverce element check
    {
        if( str[i] != str[reverce-1-i] )
        {
            original=0;
        }
    }
    if(original==1)//if normal and reverce string are same
    {
        printf("it is pelindrome number");//that print pelindrome
    }
    else
    {
        printf("this number is not pelindrome");//else print not pelindrome
    }
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//Q.2 Frequency Counter//Count the frequency of each character in a string:

#include <stdio.h>

int main() {
    char str[100];
    int frequency[1000] = {0};

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) 
    {   
        frequency[(int)str[i]]++;
         printf("%c=" , str[i]);
         printf("%d\n" , frequency[(int)str[i]]);
    }

printf("-------------------------\n");
    for (int i = 0; i < 1000; i++) 
    {
        if (frequency[i] > 0) 
        {
            printf("%c=>%d \n", (char)i, frequency[i]);
        }
    }

    return 0;
}