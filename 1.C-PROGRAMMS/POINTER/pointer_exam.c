            //  POINTER EXAM  //

//Q.1 Length Finder

#include <stdio.h>

int main()
{
    int *ptr;
    int len=0,i=1;
    char str[100];
    
    printf("enter any string:");//get string from user
    fgets(str,sizeof(str),stdin);
    
    while(str[i]!='\0')//loop for length count
    {
        len++;
        i++;
    }
    
    ptr=&len;//store length in pointer variable
    
    printf("the size of string is:%d",*ptr); //print length

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//Q.2 Cubes Generator

#include <stdio.h>

int cube(int *ptr,int n)//get second arry values in pointer
{
     printf("cube of array:\n");
      
     for( int i=0;i<n*n;i++)//take loop for print pointer variable
                            // n*n use for 2*2=4 loops
   {
       printf("%d\t",*(ptr+i));//print cube of array using pointer
   }
}


int main()
{
   int n,i,j;
   int *ptr;
   
   printf("enter array length:");//take array length from user
   scanf("%d",&n);
   
   int a[n][n],b[n][n];//take two arrays
   
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("a[%d][%d]=",i,j);
           scanf("%d",&a[i][j]);//store first array value
           
           b[i][j]=a[i][j]*a[i][j]*a[i][j];//in second array store cube of first array value
       }
       printf("\n");
   }
   
   ptr=&b;//store second array in pointer
   
   cube(&b,n);//call the cube function and call second array values
    
    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

