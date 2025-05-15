#include<stdio.h>
// Input : iRow  = 5, icol = 5;
// *       *       *       *       *
// $       $       $       $       $
// *       *       *       *       *
// $       $       $       $       $
// *       *       *       *       *
int pattern9(int iRow, int icol)
{
   for(int i = 1; i <= iRow; i++)
   {
      for(int j = 1; j <= icol; j++)
      {
         if((i % 2 ) != 0)
         {
            printf("*\t");
         }
         else
         {
            printf("$\t");
         }
      }
      printf("\n");
   }

}
int main()
{
   int Col = 0;
   int Row = 0;

   printf("Enter the Row\n");
   scanf("%d",&Row);

   printf("Enter the col\n");
   scanf("%d",&Col);

   pattern9(Row,Col);

   return 0;
}


