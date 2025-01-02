#include <stdio.h>

int main() {
    int a, b, c, min;

    
    printf("enter a value of the first number: ");
    scanf("%d",&a);
    printf("enter a value of the second number: ");
    scanf("%d",&b);
    printf("enter a value of the third number: ");
    scanf("%d",&c);

    
    if (a<b) {
        if (a<c) {
            min =a;
        } else {
            min =c;
        }
    } else {
        if (b<c) {
            min =b;
        } else {
            min =c;
        }
    }
    printf("the minimum value is: %d\n", min);

    return 0;
}
