#include<stdio.h>
int Pattern6(int iNo)
{
   char ch = 'A';
   for(int i = iNo; i >= 1; i--)
   {
      printf("%c\t",ch+i-1);
   }
}
int main()
{
   int iNo = 0;

   printf("Enter the number :\n");
   scanf("%d",&iNo);

   Pattern6(iNo);

   return 0;
}