#include <stdio.h>

int main() {
    int a, b;

    printf("enter the first number: ");
    scanf("%d",&a);
    
    printf("enter the second number: ");
    scanf("%d",&b);

    while(a<=b) {
        if((a%4==0 && a%100!=0)||(a%400==0)) 
        {
            printf("%d ",a);
        }
        a++;
    }
    
    
    return 0;
}
