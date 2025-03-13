#include<stdio.h>
int main()
{
   int Arr[5] ={10,20,30,40,50};

   int pos = 2;

   for(int i = 0; i < 5; i++)
   {
      if(Arr[i] ==Arr[pos])
      {
         int temp = Arr[0];
         Arr[0] = Arr[pos];
         Arr[pos] = temp;

      }
   }
   for(int i = 0; i < 5; i++)
   {
      printf("%d\t",Arr[i]);
   }
   



   return 0;
}