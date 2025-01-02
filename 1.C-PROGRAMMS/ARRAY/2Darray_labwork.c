// Q.1

#include <stdio.h>

int main()
{
  int row,col,i,j;
  int sum=0;
  
  printf("enter row size:");
  scanf("%d",&row);
  printf("enter col size:");
  scanf("%d",&col);
  
  int arr[row][col];
  
  for(i=0;i<row;i++)
  {
      
      for(j=0;j<col;j++)
      {
          printf("[%d][%d]:",i,j);
          scanf("%d",&arr[i][j]);
          
      }
      printf("\n");
  }
  
  for(i=0;i<row;i++)
  {
      
      for(j=0;j<col;j++)
      {
          sum+=arr[i][j];
          
      }
      printf("\n");
  }
  
  printf("sum is:%d",sum);
  
 float avg=(float)sum/(row*col);
 
 printf("\naverage is:%f",avg);
  
  

    return 0;
}

//------------------------------------------------------------------------------

// Q.2

#include <stdio.h>

int main()
{
  int row,col,i,j;
  int sum=0;
  
  printf("enter row size:");
  scanf("%d",&row);
  printf("enter col size:");
  scanf("%d",&col);
  
  int a[row][col], b[row][col], c[row][col];
  
  for(i=0;i<row;i++)
  {
      
      for(j=0;j<col;j++)
      {
          printf("a[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
          
      }
      
  }
  printf("\n");
  
    for(i=0;i<row;i++)
  {
      
      for(j=0;j<col;j++)
      {
          printf("b[%d][%d]:",i,j);
          scanf("%d",&b[i][j]);
          
      }
     
  }
   printf("\n");
  
    for(i=0;i<row;i++)
  {
      
      for(j=0;j<col;j++)
      {
           c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
          
      }
     printf("\n");
  }
   
    return 0;
}


//------------------------------------------------------------------------------

// Q.3

#include <stdio.h>

int main()
{
  int row,i,j;
  int sum=0;
  
  printf("enter row size:");
  scanf("%d",&row);

  
  int a[row][row];
  
  for(i=0;i<row;i++)
  {
      
      for(j=0;j<row;j++)
      {
          printf("a[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
          
      }
      
  }
  
  
  for(i=0;i<row;i++)
  {
      
      for(j=0;j<row;j++)
      {
          if(i==j)
          {
             sum+=a[i][j];
          }
      }
      
  }
 
 
  
  printf("\nsum is :%d",sum);
   
    return 0;
}

//------------------------------------------------------------------------------

// Q.4

#include <stdio.h>

int main()
{
  int row,col,i,j;
  int sum=0;
  
  printf("enter row size:");
  scanf("%d",&row);
  printf("enter col size:");
  scanf("%d",&col);
  
  int a[row][col];
  
  for(i=0;i<row;i++)
  {
      
      for(j=0;j<col;j++)
      {
          printf("[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
          
      }
      printf("\n");
  }
  

             printf("%d",a[0][0] );
             printf("%d",a[0][1] );
             printf("%d",a[0][2] );
             printf("%d",a[0][3] );
             printf("%d\n",a[0][4] );
             printf("%d\t",a[1][0] );
             printf("%d\n",a[1][4] );
             printf("%d\t",a[2][0] );
             printf("%d\n",a[2][4] );
             printf("%d\t",a[3][0] );
             printf("%d\n",a[3][4] );
             printf("%d",a[4][0] );
             printf("%d",a[4][1] );
             printf("%d",a[4][2] );
             printf("%d",a[4][3] );
             printf("%d",a[4][4] );
             
    
    return 0;
}