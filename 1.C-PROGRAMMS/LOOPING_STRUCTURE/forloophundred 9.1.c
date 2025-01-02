#include <stdio.h>

int main() {
    int i,n,sum=0;

    printf("enter any number: ");
    scanf("%d", &n);
    
   for(i=0;i<=n;i++){
       printf("\n%d",i);
       
       sum+=i;
   }

    printf("\nthe sum is:%d",sum);
    

    return 0;
}
