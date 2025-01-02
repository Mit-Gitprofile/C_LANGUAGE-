                 // || EXTRA PRACTICE ||
                 
//   Q. 1 -diagonal and off-matrix sum of array

#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0,sum1=0;
    
    printf("enter the row:");
    scanf("%d",&row);
    
    
    int a[row][row];
    
    //loop for store elements given by user
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    //loop for print elements given by user
    
    printf("\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf(" %d ",a[i][j]);
        }
          
          printf("\n");  
    }
    
    //make loop for sum of diagonal elements of array
    
     for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
          
          printf("\n");  
    }
    
    printf("the sum of metrix array is:%d",sum);
    
     //make loop for sum of off-matrix elements of array
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i+j==(row-1)||j+i==(row-1))
            {
                sum1+=a[i][j];
            }
        }
          
          printf("\n");  
    }
    
    printf("the sum of off array is:%d",sum1);
    
    

    return 0;
}                 

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//   Q. 2 - sumof 5*5 box border elements

#include <stdio.h>

int main()
{
    int i,j,sum=0,sum1=0;
    
   int a[5][5];
    
    //loop for store elements given by user
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    //loop for print elements given by user
    
    printf("\n");
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf(" %d ",a[i][j]);
        }
          
          printf("\n");  
    }
    
    
     printf("\n");
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum=a[0][0]+a[0][1]+a[0][2]+a[0][3]+a[0][4]+a[4][0]+a[4][1]+a[4][2]+a[4][3]+a[4][4]+a[1][0]+a[2][0]+a[3][0]+a[1][4]+a[2][4]+a[3][4];
        }
          
          printf("\n");  
    }
    
    printf("sum is:%d",sum);
    

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


//   Q. 3 - sumof 5*5 box border -nbox elements

#include <stdio.h>

int main()
{
    int i,j,sum=0,sum1=0;
    
   int a[5][5];
    
    //loop for store elements given by user
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    //loop for print elements given by user
    
    printf("\n");
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf(" %d ",a[i][j]);
        }
          
          printf("\n");  
    }
    
    
     printf("\n");
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum=a[1][1]+a[1][2]+a[1][3]+a[2][1]+a[2][2]+a[2][3]+a[3][1]+a[3][2]+a[3][3];
        }
          
          printf("\n");  
    }
    
    printf("sum is:%d",sum);
    

    return 0;
}