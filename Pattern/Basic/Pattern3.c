#include<stdio.h>
int Pattern3(int iNo)
{
   for(int i = 1; i <= iNo ; i++)
   {
      if((i % 2) == 0)
      {
         printf("*\t");
      }
      else
      {
         printf("#\t");
      }
   }
}
int main()
{
   int iNo = 0;
   printf("Enter the Num : \n");
   scanf("%d",&iNo);

   Pattern3(iNo);
   return 0;
}