     //  STRUCTURE  //

//Q-1.
/* Write a Program to create a Student Record System for 3 students using structure.
Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school */

#include <stdio.h>

struct student{
     int stu_id;
     char stu_name[60];
     int stu_age;
     char stu_course[60];
     char stu_city[60];
     int stu_standard;
     char stu_school[60];
}s;

int main()
{
    printf("\nenter student id:");
    scanf("%d",&s.stu_id);
    
    printf("\nenter student name:");
    scanf("%s",&s.stu_name);
    
    printf("\nenter student age:");
    scanf("%d",&s.stu_age);
    
    printf("\nenter student course:");
    scanf("%s",&s.stu_course);
    
    printf("\nenter student city:");
    scanf("%s",&s.stu_city);
    
    printf("\nenter student standard:");
    scanf("%d",&s.stu_standard);
    
    printf("\nenter student school:");
    scanf("%s",&s.stu_school);
   
    printf("\n");
   
    printf("ALL DETAILS OF STUDENT\n");
    printf("--------------------------");
    printf("* stu_id => %d\n",s.stu_id);
    printf("* stu_name => %s\n",s.stu_name);
    printf("* stu_age => %d\n",s.stu_age);
    printf("* stu_course => %s\n",s.stu_course);
    printf("* stu_city => %s\n",s.stu_city);
    printf("* stu_standard => %d\n",s.stu_standard);
    printf("* stu_school => %s\n",s.stu_school);

    return 0;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//Q-2.

/* write a Program to create an Employee Record System with an Array of objects for a
given N number of employees using structure. Consider the below-mentioned
attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name */

#include <stdio.h>

struct Employ
{
    int emp_id;
    char emp_name[60];
    int emp_age;
    char emp_role[60];
    char emp_city[60];
    int emp_experience;
    char emp_company[60];
}emp[];

int main()
{
    int n,i;
    printf("enter employs number you want to take details:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("\n\nemploy => %d details\n\n",i);
        
        printf("enter employ id:");
        scanf("%d",&emp[i].emp_id);
        
        printf("enter employ name:");
        scanf("%s",&emp[i].emp_name);
        
        printf("enter employ age:");
        scanf("%d",&emp[i].emp_age);
        
        printf("enter employ role:");
        scanf("%s",&emp[i].emp_role);
        
        printf("enter employ city:");
        scanf("%s",&emp[i].emp_city);
        
        printf("enter employ experience (in-age):");
        scanf("%d",&emp[i].emp_age);
        
        printf("enter employ company name:");
        scanf("%s",&emp[i].emp_company);
    }
    
    for(i=1;i<=n;i++)
    {
        printf("\n\nEMPLOYE NO:%d\n",i);
        printf("* ID => %d\n",emp[i].emp_id);
        printf("* NAME => %s\n",emp[i].emp_name);
        printf("* AGE => %d\n",emp[i].emp_age);
        printf("* ROLE => %s\n",emp[i].emp_role);
        printf("* CITY => %s\n",emp[i].emp_city);
        printf("* EXPERIENCE => %d\n",emp[i].emp_age);
        printf("* COMPANY => %s\n",emp[i].emp_company);
    }
   

    return 0;
}