
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int ch; 
   int page,price,n;
   
   char fname[100]; 
   char bknm[100];
   char ather[100];
   
   FILE *fptr;
   
   printf("Enter filename:");
   scanf("%s",&fname);
   
  
   do
   {
       
   printf("\n 0. exit \n 1. enter books etail \n 2. display book information");
   
   printf("\n\nEnter your choise:");
   scanf("%d",&ch);
   
    
   
        switch(ch)
        {
            case 1:
                 printf("Enter books no.(you enter books details):");
                 scanf("%d",&n);
                 
                fptr=fopen(fname,"w");
                for(int i=1;i<=n;i++)
                {
                    printf("\n BOOK NO. => %d",i);
                    printf("\nEnter book name:");
                    scanf("%s",&bknm);
                    printf("Enter Author name:");
                    scanf("%s",&ather);
                    printf("Enter book pages:");
                    scanf("%d",&page);
                    printf("Enter book price:");
                    scanf("%d",&price);
                
                        fprintf(fptr,"\n* BOOK NO. => %d\n",i);
                        fprintf(fptr,"book name => %s\n",bknm);
                        fprintf(fptr,"Author name => %s\n",ather);
                        fprintf(fptr,"book pages=> %d\n",page);
                        fprintf(fptr,"book price=> %d\n",price);
                }
                
                printf("\n<=== your data insert successfully ===>\n");
                break;
                
            case 2:
                fptr=fopen(fname,"r");
                fclose(fptr);
                return 0;
                break;
                
            case 0:
                return 0;
                break;
                
            default:
                printf("invelid choise !!!!!");
        }
   
   }while(ch!=0);
   
}