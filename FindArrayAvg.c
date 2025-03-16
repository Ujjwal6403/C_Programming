#include <stdio.h>
#include <stdlib.h>

int FindArrayAvg(int Arr[], int length)
{
   int iSum = 0;
   for (int iCnt = 0; iCnt < length; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }
   int Avg = iSum / length;
   return Avg;
}

int main()
{
   int iSize = 0;
   int *ptr = NULL;
   int icnt = 0;
   int iRet = 0;
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

   iRet = FindArrayAvg(ptr, iSize);
   printf("The Average of array is :%d", iRet);

   free(ptr);
   return 0;
}