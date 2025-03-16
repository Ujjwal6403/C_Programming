#include <stdio.h>
#include <stdlib.h>
int FindFirstNonRepeatingNo(int Arr[], int ilength)
{
   for (int i = 0; i < ilength; i++)
   {
      for (int j = 0; j < ilength; j++)
      {
         if (i != j)
         {
            if (Arr[i] == Arr[j])
            {
               Arr[i] = 0;
               Arr[j] = 0;
            }
         }
      }
   }

   for (int i = 0; i < 5; i++)
   {
      if (Arr[i] == 0)
      {
         continue;
      }
      else
      {
         printf("The First Non_repiting element number is %d ", Arr[i]);
         break;
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

   FindFirstNonRepeatingNo(ptr, iSize);
}
