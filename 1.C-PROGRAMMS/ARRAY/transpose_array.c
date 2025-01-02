//transpose array

#include <stdio.h>

int main()
{
	int i,j,row,col;

	printf("enter row length:");
	scanf("%d",&row);
	printf("enter column length:");
	scanf("%d",&col);

	int a[row][col],b[col][row];

    printf("enter array element:\n");
	for(i=0; i<row; i++)
	{
	    for(j=0;j<col;j++)
	    {
	       printf("a[%d][%d]=",i,j);
	        scanf("%d",&a[i][j]); 
	    }
	
	} 
	
	printf("original array:\n");
	for(i=0; i<row; i++)
	{
	    for(j=0;j<col;j++)
	    {
	       printf("  %d",a[i][j]);
	      
	    }
	    printf("\n");
	
	} 
	
	
	
	for(j=0; j<col; j++)
	{
	    for(i=0;i<row;i++)
	    {
	 
	      b[j][i]=a[i][j];
	    
	    }
	
	} 
	
	printf("tranpose array:\n");
	for(j=0; j<col; j++)
	{
	    for(i=0;i<row;i++)
	    {
	       printf("  %d",b[j][i]);
	    }
	 printf("\n");
	} 
	
  
    
    

	return 0;
}