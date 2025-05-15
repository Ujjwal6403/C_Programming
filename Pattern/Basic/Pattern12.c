#include<stdio.h>

// Input : iRow = 5 , icol = 5;
// 5       4       3       2       1
// 5       4       3       2
// 5       4       3
// 5       4
// 5

int pattern12(int iRow, int icol)
{
   if(iRow != icol)
   {
      printf("Please enter  same col and row\n");
      return-1;
   }
   for(int i = iRow;i >= 1; i--)
   {
      for(int j = icol; j >= 1; j--)
      {
         if(icol-i+1 <= j)
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

   pattern12(Row,Col);

   return 0;
}


