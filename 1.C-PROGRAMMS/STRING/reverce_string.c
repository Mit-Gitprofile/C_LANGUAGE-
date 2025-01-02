// string reverce
#include <stdio.h>


int main() {
    
    int i,cnt=0;
    char str[100];
    
    printf("enter string:");
    gets(str);
    
      for(i=0;str[i]!='\0';i++)
      {
        cnt++;
      }
      printf("length is:%d\n",cnt);
      
      char b[100],j=0;
     for(i=cnt-1;str[i]!='\0';i--)
     {
         printf("%c",str[i]);
     }
      
      
     
      
    
   
    return 0;
}