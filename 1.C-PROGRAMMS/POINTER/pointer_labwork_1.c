               // POINTER  //

// Q.1

#include <stdio.h>

int main()
{
   int n,i;
   int *ptr;
   
   printf("enter the array size:");
   scanf("%d",&n);
   
   int a[n];
   
   ptr=&a;
   
   for(i=0;i<n;i++)
   {
       scanf("%u",ptr+i);
   }
   
   for(i=0;i<n;i++)
   {
        printf("%u => %d\n", ptr+i, *(ptr+i));
   }
   
   printf("cube of all array elements is:\n");
    for(i=0;i<n;i++)
   {
        printf("%u => %d\n", ptr+i, (*(ptr+i))* (*(ptr+i)));
   }

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

// Q.2

#include <stdio.h>

int main()
{
   int x,y,i;
   int *ptr,*ptrr;
   
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);
   
 
   
   ptr=&x;
   ptrr=&y;
   
    printf("before swap:\n");
    printf("x => %d\n", *ptr);
    printf("y => %d\n", *ptrr);
    
    ptr=&y;
    ptrr=&x;
    
    printf("after swap:\n");
     printf("x => %d\n", *ptr);
    printf("y => %d\n", *ptrr);

 

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------