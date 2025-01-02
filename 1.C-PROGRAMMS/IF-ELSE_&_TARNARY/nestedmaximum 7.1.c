#include <stdio.h>

int main() {
    int a, b, c, d, max;

    
    printf("enter a value of the first number: ");
    scanf("%d",&a);
    printf("enter a value of the second number: ");
    scanf("%d",&b);
    printf("enter a value of the third number: ");
    scanf("%d",&c);
    printf("enter a value of the four number: ");
    scanf("%d",&d);

    
    if(a>b) {
        if(a>c) {
            if(a>d) {
                max =a;
            } else {
                max =d;
            }
        } else {
            if(c>d) {
                max =c;
            } else {
                max =d;
            }
        }
    } else {
        if(b>c) {
            if(b>d) {
                max =b;
            } else {
                max =d;
            }
        } else {
            if(c>d) {
                max =c;
            } else {
                max =d;
            }
        }
    }
    printf("the maximum value is: %d\n", max);

    return 0;
}
