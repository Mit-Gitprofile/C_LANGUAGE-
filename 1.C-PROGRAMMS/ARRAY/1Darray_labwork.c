             //1-D array labwork

//1.--->
// length of array


#include <stdio.h>

int main()

{
    int n,i;
    printf("Enter array size:");
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<=n;i++){
        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }
    
    printf("Length of an Array:%d\n",n);

    return 0;
}

//------------------------------------------------------------------------------
//2.-->
//avearage of array

#include <stdio.h>

int main()

{
    int n,i,sum=0;
    float avg;
    
    printf("Enter array size:");
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("\nsum of array is:%d\n",sum);
    
    avg=sum/n;
    
    printf("\naverage:%f\n",avg);

    return 0;
}


//------------------------------------------------------------------------------
//3.-->
//sum of array element

#include <stdio.h>

int main()

{
    int n,i,j,sum;
    float avg;
    
    printf("Enter array size:");
    scanf("%d",&n);
    
    int a[n],b[n],c[i];
    for(i=0;i<n;i++)
    {
        printf("[A]elements:");
        scanf("%d",&a[i]);
    
    }
    
    for(i=0;i<n;i++){
        printf("[B]elements:");
        scanf("%d",&b[i]);
    }
    
     for(i=0;i<n;i++)
     {
        
            c[i]=a[i]+b[i];
             printf("%d",c[i]);
    
    }
    
     return 0;
}