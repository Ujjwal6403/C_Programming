#include<stdio.h>
#include<stdlib.h>

int ArrayIndex(int Arr[], int lenght,int Find)
{
   for(int i = 0; i < lenght; i++)
   {
      if(Arr[i] == Find)
      {
         return i;
      }
   }
   return -1;
}
int main()
{
   int iSize = 0;
   int *ptr = NULL;
   int icnt = 0;
   int iRet = 0;
   int iNo = 0;
   printf("Enter the Number of array : \n");
   scanf("%d",&iSize);

   ptr = (int *)malloc(iSize *sizeof(int));

   printf("Enter the number :\n");
   for (icnt = 0; icnt < iSize; icnt++)
   {
      scanf("%d",&ptr[icnt]);
   }

   printf("Enter the number you want to search \n");
   scanf("%d",&iNo);

   printf("Element of array :\n");
   for (icnt = 0; icnt < iSize; icnt++)
   {
      printf("%d\t",ptr[icnt]);
   }
   printf("\n");
   // int iMax = maximum(ptr,iSize);
   // int iMin = minimum(ptr,iSize);
   // int i2ndLarge = FindSecondMinMax(ptr,iMin,iMax,iSize);
   // printf("The maximum Number is = %d \n",iMax);
   // printf("The minimum Number is = %d \n",iMin);
  iRet= ArrayContain(ptr,iSize,iNo);
  if(ArrayContain(ptr,iSize,iNo))
  {
   printf("Number is present \n");
  }
  else
  {
   printf("index of array is %d",iRet);
  }
   // printf("Maximum Number of Array is = %d \n",ptr[iSize-1]);
   // printf("Minimum Number of Array is = %d \n",ptr[0]);
   // printf("Second Largest Number of Array is = %d \n",ptr[iSize-2]);
   // printf("Second Minimum Number of Array is = %d \n",ptr[1]);
   // printf("Array using specific order\n");
   // for(int k=0;k<iSize;k++)
   // {
   //    printf("%d\t",ptr[k]);
   // }

   free(ptr);
   return 0;
}