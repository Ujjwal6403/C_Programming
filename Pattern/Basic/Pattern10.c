#include<stdio.h>
// Input : iRow = 5, icol = 5;
// *       *       *       *       *
// *       *       *       *
// *       *       *
// *       *
// *
int pattern10(int iRow, int icol)
{
   for(int i = 1; i <= iRow; i++)
   {
      for(int j = 1; j <= icol; j++)
      {
         if(j <= icol-i+1)
         {
            printf("*\t");
         }
         else
         {
            printf(" \t");
         }
        
      }
      printf("\n");
      //icol--;
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

   pattern10(Row,Col);

   return 0;
}


