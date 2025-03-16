#include<stdio.h>
#include<stdlib.h>

int Findminimum(int Arr[], int ilength)
{
   int iMin = Arr[0];
   for(int icnt = 0; icnt < ilength; icnt++)
   {
      if(Arr[icnt] < iMin)
      {
         iMin = Arr[icnt];
      }
   }
   return iMin;
}

int main()
{
  
   int iSize = 0;
   int *ptr = NULL;
   int icnt = 0;
   int iNo = 0;
   int iRet = 0;
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

   iRet = Findminimum(ptr, iSize);

   printf("The minimum No is Array : %d",iRet);


   free(ptr);
   return 0;
}