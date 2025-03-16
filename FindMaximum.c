#include<stdio.h>
#include<stdlib.h>

int Findmaximum(int Arr[], int ilength)
{
   int imax = Arr[0];
   for(int icnt = 0; icnt < ilength; icnt++)
   {
      if(Arr[icnt] > imax)
      {
         imax = Arr[icnt];
      }
   }
   return imax;
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

   iRet = Findmaximum(ptr, iSize);

   printf("The maximum No is Array : %d",iRet);

   free(ptr);
   return 0;
}
