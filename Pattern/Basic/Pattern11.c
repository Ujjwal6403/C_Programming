#include<stdio.h>

// *       *       *       *       *
// *       *       *       *
// *       *       *
// *       *
// *
int pattern11(int iRow, int icol)
{
   if(iRow != icol)
   {
      printf("Please Add same col and row\n");
      return-1;
   }
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

   pattern11(Row,Col);

   return 0;
}


