//Q-1.

//sum offirst and last digit in 3-digit value

#include <stdio.h>

int main()
{
    int n,first,last,sum=0;
    
    printf("enter 3-digits positive number:");
    scanf("%d",&n);//take 3-digits positive number value from user 
    
    if(n>=0)
    {
    
        first=n%10;//point first value 
        
        last=n/100;//point last value
       
        sum=first+last;//sum of first and last value
    
         printf("sum of first & last digit:%d",sum);//print sum
    }
    else
    {
        printf("enter value is nagative ! please enter positive value");
    }

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


//Q-2.

#include<stdio.h>
#include<string.h>

char check(char str[100])
{
    printf("enter any string:");
    fgets(str,sizeof(str),stdin);

    int vovel=0;
    int consant=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        int low = tolower(str[i]);
        
        if(low>= 'a' && low<= 'z' )
        {
            if(low=='a'||low=='e'||low=='i'||low=='o'||low=='u')
            {
               vovel++; 
            }
            else
            {
                consant++;
            }
        }
    }
    
    printf("conconent:%d\n",consant);
    printf("vovel:%d",vovel);
}

int main()
{
    char str[100];
    
    check(str);
    
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

// Q-3.

// PATTERN


#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)//take loop for row
    {
        for(j=1;j<=5;j++)//take loop for column
        {
            if(j>=i)
            {
                printf("%d",11-j);//print value 
            }
            else
            {
                printf(" ");//for space
            }
        }
        printf("\n");
    }

    return 0;
}


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

// Q-4. 

//Write a Program to check if a given number is divisible by both 3 & 5 or not using udf

#include <stdio.h>
void check(int a)//call a from main function
{
    printf("enter any number:");
    scanf("%d",&a);//take value fro user
    
  if((a%3==0)&&(a%5==0))//check value is divisible by both 3 & 5.
  {
      printf("The given number is divisible by both 3 & 5.");
  }
  else if(a%3==0)//check value is divisible by both 3.
  {
      printf("The given number is divisible by  3 .");
  }
  else if(a%5==0)//check value is divisible by both 5.
  {
      printf("The given number is divisible by  5 .");
  }
  else
  {            // else print value nit divisible
      printf("The given number is not divisible by 3 & 5.");
  }
}

void main()
{
    int a;
    check(a);
}


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

// Q-5.

// POINTER (SUM OF TWO 1D ARRAY USING POINTER)

#include <stdio.h>

int main()
{
  int n,i,sum=0;
  int *ptr;
   
  printf("enter the array size:");//take array length from user
  scanf("%d",&n);
   
  int a[n],b[n];// initilize two 1D array a or b
   
   
  for(i=0;i<n;i++)//take loop for a value get from user
  {
      printf("a[%d]:",i);
      scanf("%d",&a[i]);
  }
   
  for(i=0;i<n;i++)//take loop for b value get from user
  {
      printf("b[%d]:",i);
      scanf("%d",&b[i]);
  }
   
  
    for(i=0;i<n;i++)//take loop for sum of two array
  {
      sum+=a[i]+b[i];
  }
   
  ptr=&sum;//store sum value in pointer
   
  printf("sum of two 1d array is: %d ",*ptr);//print pointer values sum

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


// Q-6.

// STRUCTURE (mobile details using array object )

#include <stdio.h>

struct Employ{

    char company_name[60];
    char color[60];
    char model[60];
    int price;
   
}m[];

int main()
{
    int n,i;
    printf("enter no of mobile details have you insert");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("\n\nmobile no => %d \n\n",i);
        
        printf("enter company name:");
        scanf("%s",&m[i].company_name);
        
        printf("enter mobile color:");
        scanf("%s",&m[i].color);
        
        printf("enter mobile model:");
        scanf("%s",&m[i].model);
        
        printf("enter mobile price:");
        scanf("%d",&m[i].price);
        
    }
    
    for(i=1;i<=n;i++)
    {
        printf("\n\n MOBILE NO:%d\n",i);
        printf(" COMPANY NAME => %s\n",m[i].company_name);
        printf(" COLOR => %s\n",m[i].color);
        printf(" MODEL => %s\n",m[i].model);
        printf(" PRICE => %d\n",m[i].price);
       
    }
   

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

// Q-7.

// FILE-HANDLING (file create,read it and write it)

#include <stdio.h>
#include <ctype.h>

int main()
{
  FILE *ptr;
   
  ptr=fopen("test.txt","r");
    char file[1000];

    if(ptr!=NULL) 
    {
        while(fgets(file, 1000,ptr)) {
        printf("%s",file);
        }
    }

    else {
        printf("file reading unsuccessfull");
    }
    
    ptr=fopen("write.txt","w");
    
    fputs("how are you!\n", ptr);
    fputs("this file is written file", ptr);

     fclose(ptr);
    
   
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
