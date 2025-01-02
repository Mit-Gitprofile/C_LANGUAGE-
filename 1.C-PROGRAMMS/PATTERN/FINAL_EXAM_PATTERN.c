
#include <stdio.h>

int main()
{
    int i,j,n=1,cha=65;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                if(n%2==1)
                {
                    printf("%d",n);
                }
                    n+=1;
                
                if(n%2==1)
                {
                    printf("%c",cha);
                }
                   cha+=1;
            }
            else
            {
                printf(" ");
            }
            printf("\t");
        }
        printf("\n");
    }
    
    return 0;
}