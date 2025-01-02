#include <stdio.h>

int main() {
    int i=15;
   
    while(i>=0){
        if(i % 2 == 1){
             printf("\n%d",i);
        }
        i--;
    }

    return 0;
}