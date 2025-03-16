#include<stdio.h>
int Pattern4(int iNo)
{
   int j = 1;
   for(int i = 1; i <= iNo;i++)
   {
      if((i % 2) != 0)
      {
         printf("$\t");
         
      }
      else
      {
         printf("%d\t",j);
         j++;
      }
     
   }
}
int main()
{
   int iNo = 0;
   printf("Enter the Num : \n");
   scanf("%d",&iNo);

   Pattern4(iNo);
   return 0;
}