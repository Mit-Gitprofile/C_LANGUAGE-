              // U D F //
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------

//Q-1.
//Write a Program to find the sum of all 1D Array elements by passing an array as an
//argument using UDF.

#include <stdio.h>

int array()
{        
    int n,i,sum=0;
         printf("enter array length:");
         scanf("%d",&n);
         
    int a[n];
        for(i=0;i<n;i++)
        {
            printf("a[%d]:",i);
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
          sum+=a[i];
        }
    return sum; 
}

void main()
{
    printf("The sum of array is :%d",array());
}

//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------

//Q-2.
//Write a Program to find the length of the String by passing a string as an argument
//using UDF. Do not use any string function.


#include <stdio.h>

char length()
{        

    int i,len;
    char str[1000];
     printf("enter any string:");
     gets(str);
     
    len=strlen(str);
      return len; 
}

int main()
{
     printf("Length of string is:%d",length());
}

//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------