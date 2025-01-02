
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("enter any number:");
    scanf("%d",&n);

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}