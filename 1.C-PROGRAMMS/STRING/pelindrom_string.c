//pelindrom string programm

#include <stdio.h>

int main()
{
    int len=0,i,f;
    char str[100],rev[1000];
    
    
    printf("Enter your string:");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("Length is:%d\n",len);
    
    printf("Original string is:%s\n",str);
    printf("Reverced string is:");
    
    int j=0;
    for(i=len-1;str[i]!='\0';i--)
    {
      printf("%c",str[i]);
      rev[j]=str[i];
      j++;
    }
    
    printf("\n%s",str);
    printf("\n%s",rev);
    
    for(i=0;i<len-1;i++)
    {
        if(str[i]==rev[i])
        {
            f=0;
        }
        else
        {
            f=1;
        }
    }
    if(f==0)
        {
            printf("\nIt is pelindrome string");
        }
        else
        {
            printf("\nThis string is not pelindrome");
        }
    
   
    return 0;
}