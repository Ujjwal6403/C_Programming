#include<stdio.h>
int Pattern(int iNo)
{
   for(int i = 1; i <= iNo ; i++)
   {
      printf("%d\t",i);
   }
}
int main()
{
   int iNo = 0;
   printf("Enter the Num : \n");
   scanf("%d",&iNo);

   Pattern(iNo);
   return 0;
}