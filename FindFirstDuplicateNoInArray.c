#include <stdio.h>
#include <stdbool.h>

int FindFirstDuplicate(int Arr[], int lenght)
{
   bool flag = false;
   for (int i = 0; i < lenght; i++)
   {
      for (int j = 0; j < lenght; j++)
      {
         if (i != j)
         {
            if (Arr[i] == Arr[j])
            {
               printf("%d %d", Arr[i], j);
               flag = true;
               break;
            }
         }
      }
      if (flag)
         break;
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

   FindFirstDuplicate(ptr, iSize);

   return 0;
}