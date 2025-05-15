#include<stdio.h>
// Input : 5
// A       B       C       D       E
int Pattern6(int iNo)
{
   char ch = 'A';
   for(int i = 1; i <= iNo; i++)
   {
      printf("%c\t",ch);
      ch++;
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