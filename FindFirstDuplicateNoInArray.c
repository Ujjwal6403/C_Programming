#include<stdio.h>
#include<stdbool.h>
int main()
{
   int Arr[8] = {10,20, 10,30,40,20,30,40};
   bool flag=false;
   for(int i = 0;i < 8; i++)
   {
      for(int j = 0; j < 8;j++)
      {
         if(i != j)
         {
            if(Arr[i] == Arr[j])
            {
               printf("%d %d",Arr[i], j);
               flag=true;
               break;
            }
         }
      }
      if(flag)
         break;
   }
   return 0;
}