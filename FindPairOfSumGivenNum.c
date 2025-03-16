#include <stdio.h>
#include <stdlib.h>
void FindPairOfSumGivenNum(int Arr[], int ilength, int Num)
{
   for (int i = 0; i < ilength; i++)
   {
      if (Arr[i] + Arr[i + 1] == Num)
      {
         printf("{%d %d}\n", Arr[i], Arr[i + 1]);
      }
   }
}

int main()
{

   int iSize = 0;
   int *ptr = NULL;
   int icnt = 0;
   int iNo = 0;
   
   printf("Enter the Number of array : \n");
   scanf("%d", &iSize);

   ptr = (int *)malloc(iSize * sizeof(int));

   printf("Enter the number :\n");
   for (icnt = 0; icnt < iSize; icnt++)
   {
      scanf("%d", &ptr[icnt]);
   }

   printf("Element of array :\n");
   for (icnt = 0; icnt < iSize; icnt++)
   {
      printf("%d\t", ptr[icnt]);
   }
   printf("\n");

   printf("Enter the number\n");
   scanf("%d", &iNo);

   FindPairOfSumGivenNum(ptr, iSize, iNo);

   free(ptr);
}