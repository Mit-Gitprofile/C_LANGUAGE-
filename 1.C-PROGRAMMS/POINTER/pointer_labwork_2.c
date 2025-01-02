               // POINTER  //

// Q.1 reverced array using pointer 

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
       printf("a[%d]=>",i);
       scanf("%u",ptr+i);
   }
   
   printf("original array:");
   for(i=0;i<n;i++)
   {
           printf(" %d", *(ptr+i));
   }
   
    printf("\nreverced array:");
    
   for(i=n-1;i>=0;i--)
   {
        printf(" %d", *(ptr+i));
   }
   
  
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

