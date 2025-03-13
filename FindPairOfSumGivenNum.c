#include<stdio.h>
int main()
{
   int Arr[11] ={1,8,1,2,3,4,5,6,4,5,4};
   int Num  = 9;
   for(int i = 0; i < 11; i++)
   {
      if(Arr[i]+Arr[i+1] == Num)
      {
         printf("{%d %d}\n",Arr[i],Arr[i+1]);
      }
   }
}