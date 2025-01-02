

#include <stdio.h>

int main()
{
	int i,n;

	printf("enter array length:");
	scanf("%d",&n);

	int a[n];

	for(i=0; i<n; i++)
	{
	    printf("array:");
		scanf("%d",&a[i]);
	} 
	
   for(i=0;i<n;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
             printf(" \nnegative value is:%d",a[i]);
        }
    }
    
    

	return 0;
}