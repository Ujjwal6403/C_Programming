#include<stdio.h>
#include<stdbool.h>

int main()
{
   int Arr[] = {11, 252, 38778, 252, 11 };
   bool flag = false;
   for(int i = 0; i < 5; i++)
   {
      int temp = Arr[i];
      int iReverse = 0;
      while (temp!= 0)
      {
         int iDigit = temp % 10;
         iReverse = (iReverse * 10) + iDigit;
         temp = temp / 10;
      } 
      if(Arr[i] == iReverse)
      {
        continue;
      }
      else
      {
         flag = true;
      }
   }
   if(flag == 0)
   {
      printf("palindrom");
   }
   else
   {
      printf("not pallidrom");
   }
   return 0;
}