#include<stdio.h>
// Input : iRow = 5, icol = 5;
// *       *       *       *       *
// *       *       *       *
// *       *       *
// *       *
// *
// *
// *       *
// *       *       *
// *       *       *       *
// *       *       *       *       *
int Pattern(int iRow, int iCol)
{
   int i = 0;
   int j = 0;

   for(int i = 1; i <= iRow; i++)
   {
      for(int j = 1; j <= iCol; j++)
      {
         if(iCol-i+1 < j)
         {
            printf("\t");
         }
         else
         {
            printf("*\t");
         }
      
      }
      printf("\n");
   }
   for(int i = 1; i <= iRow; i++)
   {
      for(int j = 1; j <= iCol; j++)
      {
         if(j <= i)
         {
            printf("*\t");
         }
         else
         {
            printf("\t");
         }
      
      }
      printf("\n");
   }
}
int main()
{
   int iRow = 0;
   int iCol = 0;

   printf("Enter the iRow:\n");
   scanf("%d",&iRow);

   printf("Enter the iCol:\n");
   scanf("%d",&iCol);

   Pattern(iRow,iCol);


   return 0;
}