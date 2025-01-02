//      EXTRA PRACTICE       //

// STONE-PAPER-SIZER (GAME USING ELSE-IF LADDER)

#include <stdio.h>

char cmpwin(char cmp[10])
{
    printf("\n COMPUTER WIN THE GAME....");
}

char youwin(char str[10])
{
    printf("\n YOU WIN THIS GAME...");
}
int main() {
    char str[10];
    char cmp[10];
    
    printf(" enter stone for [s] \n enter paper for [p]\n enter sizers for [z]\n\n");
    
    printf("enter your choise:");
    scanf("%s",&str[10]);
    
    printf("enter computer choise:");
    scanf("%s",&cmp[10]);
    
    if(cmp[10] == str[10])
    {
        printf("GAME IS DRAW...");
    }
    
    else if(cmp[10]=='s' && str[10]=='p' ||cmp[10]=='S' && str[10]=='p')
    {
        cmpwin(cmp);
    }
    
    else if(cmp[10]=='s' && str[10]=='z' ||cmp[10]=='S' && str[10]=='Z')
    {
        cmpwin(cmp);
    }
    
     else if(cmp[10]=='z' && str[10]=='p' ||cmp[10]=='Z' && str[10]=='P')
    {
        cmpwin(cmp);
    }
    
    
     else if(cmp[10]=='p' && str[10]=='s' ||cmp[10]=='P' && str[10]=='S')
    {
        youwin(str);
    }
    
    else if(cmp[10]=='z' && str[10]=='s' ||cmp[10]=='Z' && str[10]=='S')
    {
       youwin(str);
    }
    
     else if(cmp[10]=='p' && str[10]=='z' ||cmp[10]=='P' && str[10]=='Z')
    {
        youwin(str);
    }
    
    else
    {
        printf("  WRONG CHOISE  ");
    }
    
    return 0;
}