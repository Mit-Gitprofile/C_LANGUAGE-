
#include <stdio.h>

int main()
{
    int n,org,rem,rev,sum=0;
    
    printf("enter number:");
    scanf("%d",&n);
    
    org=n;
    
    while(n!=0)
    {
       
        rem=sum%10;
        rev=rev*10+rem;
        sum+=n%10; 
        n/=10;
      
    }
    
    printf("\nsum is:%d",sum);
    printf("\nreverce number is:%d",rev);
    
    if(sum*rev == org)
    {
        printf("\nthis number is megic :%d",org*rev);
    }
    else
    {
        printf("\nnot megic");
    }
    
   
    

    return 0;
}