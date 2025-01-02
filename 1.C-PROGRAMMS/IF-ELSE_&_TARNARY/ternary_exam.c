//Step 1: Grade Calculation

#include <stdio.h>

int main()
{
   int n;
   
   //take mark value from user
   printf("Enter your score:");
   scanf("%d",&n);
   
   //make calculation of grade using ternary operator
   (n>=90)?printf(" your grade is:A"):
   ((n>=80)?printf("your grade is:B"):
   (n>=70)?printf("your grade is:C"):
   (n>=60)?printf("your grade is:D"):
   (n>=40)?printf("your grade is:F"):
   printf("you not success in exam"));

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

//Step 2: Additional Comments

#include <stdio.h>

int main()
{
   int n;
   //take mark value from user
   printf("Enter your score:");
   scanf("%d",&n);
   
   char gr;
   //make calculation of grade using ternary operator
  gr=(n>=90)?'A':
   ((n>=80)?'B':
   (n>=70)?'C':
   (n>=60)?'D':
   (n>=40)?'F':
   printf("you not success in exam\n"));
   
   //print the grade value
   printf("your grsde is:%c",gr);
   
   
   
//   //make switchcase for grade calculation
  switch (gr) {
        case 'A':
            printf("\nExcellent work!");
            break;
        case 'B':
            printf("\nWell done");
            break;
        case 'C':
            printf("\nGood job");
            break;
        case 'D':
            printf("\nYou passed, but you could do better");
            break;
        case 'F':
            printf("\nSorry, you failed");
            break;
            
            //for invelid grade
        default:
            printf("\nInvalid grade"); 
            break;
}

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------


//Step 3: Eligibility Check

#include <stdio.h>

int main()
{
   int n;
   //take mark value from user
   printf("Enter your score:");
   scanf("%d",&n);
   
   char gr;
   //make calculation of grade using ternary operator
  gr=(n>=90)?'A':
   ((n>=80)?'B':
   (n>=70)?'C':
   (n>=60)?'D':
   (n>=40)?'F':
   printf("you not success in exam\n"));
   
   //print the grade value
   printf("your grsde is:%c",gr);
   
   
   
//   //make switchcase for grade calculation
  switch (gr) {
        case 'A':
            printf("\nExcellent work!");
            break;
        case 'B':
            printf("\nWell done");
            break;
        case 'C':
            printf("\nGood job");
            break;
        case 'D':
            printf("\nYou passed, but you could do better");
            break;
        case 'F':
            printf("\nSorry, you failed");
            break;
            
            //for invelid grade
        default:
            printf("\nInvalid grade"); 
            break;
}

    //make if else condition for eligliblity of voting
     if(gr== 'A'||gr== 'B'||gr== 'C'||gr== 'D'){
        printf("\nYou are eligible for the next level.");
     }
    else if(gr=='F'){
        printf("\nPlease try again next time’");
    }
    else{
        printf("\nnot eligible");
    }

    return 0;
}