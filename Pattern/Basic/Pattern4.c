#include<stdio.h>
int Pattern4(int iNo)
{
   char ch = 'A';
   for(int i = 1; i <= iNo;i++)
   {
      if((i % 2) != 0)
      {
         printf("%c\t",ch);
         ch++;
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

   Pattern4(iNo);
   return 0;
}