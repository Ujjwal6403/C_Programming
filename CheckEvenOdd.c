#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int ivalue)
{
   if((ivalue % 2) == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
}
int main()
{
   int iNo = 0;
   bool bRet = 0;
   
   printf("Enter the number : \n");
   scanf("%d",&iNo);

   bRet = CheckEvenOdd(iNo);

   if(bRet == true)
   {
      printf("The number is even :%d",iNo);
   }
   else
   {
      printf("The Number is odd :%d",iNo);
   }
   
   return 0;
}