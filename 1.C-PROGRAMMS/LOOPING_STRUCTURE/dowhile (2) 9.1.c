#include <stdio.h>

int main()
{
   
    int n,i;
    
    printf("enter any number:");
    scanf("%d",&n);
   do{
       if(i%2 == 0){
            printf("\n%d",i);
       }
      
       i++;
   }while(i<=n);

    return 0;
}