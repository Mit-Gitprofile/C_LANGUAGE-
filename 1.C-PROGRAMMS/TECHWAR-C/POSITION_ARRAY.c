          //====================//    
          //  TECHWAR PRIGRAMM  //
          //====================//

#include <stdio.h>

int main()
{
    int n;
    
    printf("enter array length:");//take array length
    scanf("%d",&n);
    
    int a[n];
   
    for(int i=0; i<n; i++)//take array value from user
    {
        scanf("%d",&a[i]);
    }
    
    int d;
    printf("d=");
    scanf("%d",&d);
    
    for(int i=d; i<n; i++)//loop for print values after d
    {
        printf("%d",a[i]);
    }
    
    for(int i=0; i<d; i++)//loop for print values before d
    {
        printf("%d",a[i]);
    }

    return 0;
}