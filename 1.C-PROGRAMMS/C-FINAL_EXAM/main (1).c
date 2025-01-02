//Q-3.

// REVERCED STRING

#include <stdio.h>
#include<string.h>

int main()
{

    int i,j,len=0;
    
    char str[100];
    char rev[100];
    printf("enter any string:");
    fgets(str,sizeof(str),stdin);
    
    len=strlen(str);
    j=len-1;
    
    for(i=0;i<len;i++)
    {
        rev[i]=str[j];
        j--;
    }
   
    printf("\n%s <= reverced string",rev);
    
    return 0;
}