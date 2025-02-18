#include<stdio.h>
#include<stdbool.h>
int main()
{
   int Arr[] = {10, 20, 30, 40};
   int lenght = sizeof(Arr)/sizeof(int);
   int secondmaxindex = lenght-2;

   for(int i = 0; i < lenght; i++)
   {
      for(int j = 0; j < lenght; j++)
      {
         if(Arr[i] < Arr[j])
         {
            int temp = Arr[i];
            Arr[i]= Arr[j];
            Arr[j]= temp;
         }

      }
   }
   for(int k = 0; k < lenght; k++)
   {
      printf("%d\t",Arr[k]);
   }

   printf("\n");
   while (true && secondmaxindex>0)
   {
      if(Arr[lenght-1]==(Arr[secondmaxindex]))
      {
         secondmaxindex--;
      }
      else
      {
         printf("%d",Arr[secondmaxindex]);
         break;
      }
   }
   if(secondmaxindex==0)
   {
      printf("There is no socond larrgest number\n");
   }
   
   return 0;
}