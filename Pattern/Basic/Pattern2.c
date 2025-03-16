#include<stdio.h>
int Pattern2(int iNo)
{
   for(int i = iNo; i >= 1 ; i--)
   {
      printf("%d\t",i);
   }
}
int main()
{
   int iNo = 0;
   printf("Enter the Num : \n");
   scanf("%d",&iNo);

   Pattern2(iNo);
   return 0;
}