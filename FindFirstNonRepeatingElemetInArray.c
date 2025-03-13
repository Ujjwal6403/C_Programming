#include<stdio.h>

int main()
{
   
   int Arr[5] = {20,35,64,35,20};

   for(int i = 0; i < 5; i++)
   {
      for(int j = 0; j < 5; j++)
      {
         if(i != j)
         {
            if(Arr[i] == Arr[j])
            {
               Arr[i] = 0;
               Arr[j] = 0;
            }
         }
      }
   }

   for(int i = 0; i < 5; i++)
   {
     if(Arr[i] == 0)
     {
      continue;
     }
     else
     {
      printf("The First Non_repiting element number is %d ",Arr[i]);
      break;
     }
   }

   
}