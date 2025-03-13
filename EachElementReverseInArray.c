#include<stdio.h>
#include<stdlib.h>
int EachElmtReverseInArry(int Arr[], int lenght)
{
   for(int i = 0; i < lenght; i++)
   {
      int temp = Arr[i];
      int Reverse = 0;
         while(temp != 0)
         {
            int iDigit = 0;
            iDigit = temp % 10;

             Reverse =( Reverse * 10)+iDigit;

            temp = temp / 10;
         }
         Arr[i] = Reverse;
   }
   
   for(int i = 0; i < lenght; i++)
   {
      printf("%d\t",Arr[i]);
   }
}
int main()
{
   int Arr[5] = {58, 24, 35, 48, 59};


   EachElmtReverseInArry(Arr,5);
   return 0;
}