#include <stdio.h>

int main() {
    int start, end, year;

    printf("enter the start year: ");
    scanf("%d", &start);
    
    printf("enter the end year: ");
    scanf("%d", &end);


    for (year = start; year <= end; year++) 
    {
        if ((year%4 == 0 && year%100 != 0)||(year%400 == 0)) 
        {
            printf("%d\n", year);
        }
    }

    return 0;
}
