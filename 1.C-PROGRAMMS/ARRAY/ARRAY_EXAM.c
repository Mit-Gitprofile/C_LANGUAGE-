 //Q.1 Negative Elements in 1D Array
 
// Develop a program that finds all the negative elements from a given 1D array.
// Example:

// Input:
// Enter the array's size: 5
// Enter array's elements:
// a[0] = 2
// a[1] = -4
// a[2] = 1
// a[3] = -3
// a[4] = -5

// Output:
// Negative elements from an Array: -4, -3, -5

#include <stdio.h>

int main()
{
    int i,n;
    
    //take array length from user
    printf("Enter the array's size:");
    scanf("%d",&n);
    
    int arr[n];
    //declare array & arraysize
    
    //take loop for store value given by user
    for(i=0;i<n;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    
    //take loop for print value given by user
    printf("\narray is:\n");
    for(i=0;i<n;i++)
    {
        printf("\narr[%d]=%d",i,arr[i]);
    }
    
    //take loop for print nagative value given by user
    printf("\n\nnegative vaiue is:");
    for(i=0;i<n;i++)
    {
      if(arr[i]<0)
      {
          printf("%d,",arr[i]);//print nagative value
      }
    }
    

    return 0;
}

//------------------------------------------------------------------------------

//Q.2 Largest Element in 2D Array

// Develop a Program to find the largest element from a given 2D array.
// Example:

// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6

// Output:
// The largest element is: 9

 #include <stdio.h>

 int main()
{
    int i,j,row,col,m;
    
         printf("Enter the row size:");
         scanf("%d",&row);
         
         printf("Enter the column size:");
         scanf("%d",&col);
         
         
         int arr[row][col];
         
         for(i=0;i<row;i++)
         {
             for(j=0;j<col;j++)
             {
                 printf("[%d][%d]:",i,j);
                 //printf("element:");
                 scanf("%d",&arr[i][j]);
             }
             printf("\n");
         }
         
          m=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(arr[i][j]>m) 
                {
                  m=arr[i][j];
                }
            }
        }
        printf("\nthe largest value is :%d",m);
        return 0;
            
}


//------------------------------------------------------------------------------

//Q.3 Transpose of 2D Array

// Develop a Program to find the transpose matrix of a given 2D array.
// Example:

// Input:
// Enter the array's row & column size: 3
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6

// Output:
// The transpose matrix of an array:
// 2 3 8
// 4 5 2
// 1 4 6

 #include <stdio.h>

 int main()
{
    int i,j,row,col;
    
    
        //take row and column length from user
         printf("Enter the row size:");
         scanf("%d",&row);
         
         printf("Enter the column size:");
         scanf("%d",&col);
         
          //take loop for store value given from user
         int a[row][col],b[col][row];
         
         for(i=0;i<row;i++)
         {
             for(j=0;j<col;j++)
             {
                
                  printf("a[%d][%d]:",i,j);
                 scanf("%d",&a[i][j]);//store array value
             }
             printf("\n");
         }
         
         //take loop for print value given from user
         printf("original array:\n");
          for(i=0;i<row;i++)
         {
             for(j=0;j<col;j++)
             {
                printf("  %d",a[i][j]);//print original array value
             }
             printf("\n");
         }
         
         //make loop for tranpose array value
         for(j=0;j<col;j++)
         {
             for(i=0;i<row;i++)
             {
                b[j][i]=a[i][j];
             }
             printf("\n");
         }
         
         
         //make loop for print transpose value of array
         printf("tranpose array:\n");
          
         for(j=0;j<col;j++)
         {
             for(i=0;i<row;i++)
             {
                printf("  %d",b[j][i]);//print transpose value
             }
             printf("\n");
         }
         
    return 0;     
}


//------------------------------------------------------------------------------

// Q.4 Sum of Elements in Row & Column of 2D Array

// Develop a Program to print and find the sum of all elements of a given row & column from a 2D
// array.
// Example:

// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6

// Output:
// Enter row number: 0
// Elements of row 0: 2, 7, 1
// The sum of a row 0: 10
// Enter column number: 2
// Elements of column 2: 1, 4, 6
// The sum of column 2: 11
 
 
 #include <stdio.h>

  int main()
 {
    int i,j,row,col,x,y,sum=0,sum1=0;
    
    
         //take row and column length from user
         printf("Enter the row size:");
          scanf("%d",&row);
         
          printf("Enter the column size:");
          scanf("%d",&col);
         
           //take loop for store value given from user
          int a[row][col];
         
          for(i=0;i<row;i++)
         {
              for(j=0;j<col;j++)
              {
                
                 printf("a[%d][%d]:",i,j);
                  scanf("%d",&a[i][j]);//store array value
              }
              printf("\n");
          }
         
         //take loop for print value given from user
          printf("original array:\n");
          for(i=0;i<row;i++)
          {
              for(j=0;j<col;j++)
              {
                 printf("  %d",a[i][j]);//print original array value
              }
              printf("\n");
          }
         
         
         //loop for row operation
         
        printf("\nenter row number : ");
        scanf("%d",&x);
        
        printf("\nElements of row %d:",x);
        
        
        for(i=0;i<row;i++)
          {
              for(j=0;j<col;j++)
              {
                if(x==i)
                {
                    printf("  %d",a[i][j]);
                    sum+=a[i][j];
                }
              }
              printf("\n");
          }
          
         printf("The sum of a row %d:%d",x,sum);
          
          
           //loop for column operation
          
        printf("\nenter column number : ");
        scanf("%d",&y);
        
        printf("\nElements of column %d:",y);
        
        
        for(i=0;i<row;i++)
          {
              for(j=0;j<col;j++)
              {
                if(y==j)
                {
                    printf("  %d",a[i][j]);
                    sum1+=a[i][j];
                }
              }
             
          }
          
          printf("\nThe sum of a row %d:%d",y,sum1);
        
    return 0;
      
 }  
   
 