#include<stdio.h>
// Input : iRow = 5, icol = 5;
// 1       2       3       4       5
// 1       2       3       4
// 1       2       3
// 1       2
// 1
int pattern8(int iRow, int icol)
{
   for(int i = 1;i <= iRow; i++)
   {
      for(int j = 1; j <= icol; j++)
      {
         if(i == 1)
         {
            printf("%d\t",j);
         }
         else if(j<=icol-i+1)
         {
            printf("%d\t",j);
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

   pattern8(Row,Col);
   int col = 5;
   
}