  //==============================//
  //  2D ARRAY WITH UDF-FUNCTION  //
  //==============================//

#include <stdio.h>

int array (int row, int col, int arr[row][col])
{
   
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row,col,i,j;
    
    printf("Enter row size:");
    scanf("%d",&row);
    
    printf("Enter column size:");
    scanf("%d",&col);
    
    int arr[row][col];
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Original array is:\n");
    array(row,col,arr);

    return 0;
}