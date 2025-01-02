             // STRUCTURE & FILE-HANDLING  //
             //----------------------------//

//Q.1 File Handling

#include <stdio.h>

int main()
{
    FILE *ptr;
    
    ptr=fopen("even.txt","w");//make even file 
    
    for(int i=50;i<=70;i++)//take loop for value 50 to 70
    {
            if(i%2==0)
            {
                fprintf(ptr," %d",i);//print all even value
            }
    }
    
    ptr=fopen("odd.txt","w");//make odd file
    
    for(int j=50;j<=70;j++)//take loop for value 50 to 70
    {
            if(j%2==1)
            {
                fprintf(ptr," %d",j);//print all odd value
            }
    }

    return 0;
}


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------


//Q.2 Structures and Percentage Calculation


#include <stdio.h>

struct Student //make student structure
{
    int roll_no;
    char stu_name[60];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    
}s[];//object of structure

int main()
{
    int i;
    float sum=0,avg=0;
   
   printf("\n\n!-- enter five students details --!\n\n");
    
    for(i=1;i<=5;i++)//take loop for five stdents detail take from user
    {
        printf("\n\nEnter details of Student : %d \n\n",i);
        
        printf("Roll no =>");//take roll no of student
        scanf("%d",&s[i].roll_no);
        
        printf("Name =>");//take student name
        scanf("%s",&s[i].stu_name);
        
        printf("Chemistry =>");//take student chemistry marks
        scanf("%d",&s[i].chem_marks);
        
        printf("Mathematics =>");//take student maths marks
        scanf("%d",&s[i].maths_marks);
        
        printf("Physics =>");//enter studentd physics marks
        scanf("%d",&s[i].phy_marks);
        
    }
    
    for(i=1;i<=5;i++)//take loop for print values
    {
        sum = s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;//sum of marks
        avg= (sum/300)*100;//average of marks
        
        printf("\n\n");
        printf(" %s",s[i].stu_name);
        printf(" (%d) \n",s[i].roll_no);
        printf(" Chemistry => %d\n",s[i].chem_marks);  
        printf(" Mathematics => %d\n",s[i].maths_marks);  //print all values take fro user
        printf(" Physics => %d\n",s[i].phy_marks);
        printf(" Total => (%.0f/300)\n",sum);
        printf(" Percentage = %.2f\n\n",avg);
        
    }
   

    return 0;
}
