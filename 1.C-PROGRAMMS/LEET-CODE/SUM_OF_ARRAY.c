    
    //===============================//
    // LEET-CODE(SUM_OF_ARRAY_VALUE) //
    //===============================//


#include <stdio.h>

int main()
{
  int target=26;
  int a[4]={2,7,11,15};
  
  for(int i=0;i<4;i++)
  {
      for(int j=0;j<4;j++)
      {
           if(a[i]+a[j]==target)
           {
               
               printf("[ %d ]",i);
           }
      }
  }

    return 0;
}