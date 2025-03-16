#include<stdio.h>
#include<stdlib.h>

int ArrayReverse(int Arr[], int lenght)
{
   int i = 0;
   int j = 0;
   int l = lenght-1;

   for( i = 0; i < lenght; i++)
   {
      if(i > l)
      {
         break;
      }
      int temp = Arr[i];
      Arr[i] = Arr[l];
      Arr[l] = temp;
      l--;
   }
   for(i = 0; i < lenght; i++)
   {
      printf("%d\t",Arr[i]);
   }
}

int main()
{
   int isize = 0;
   int icnt = 0;
   int *ptr = NULL;
   int iRet = 0;

   printf("Enter the number of element in Array : \n");
   scanf("%d",&isize);

   ptr = (int *)malloc(isize * sizeof(int));

   printf("Enter the Number :\n");
   for(icnt= 0; icnt < isize; icnt++)
   {
      scanf("%d",&ptr[icnt]);
   }

   printf("Element of array :\n");
   for(icnt = 0; icnt < isize; icnt++)
   {
      printf("%d\n",ptr[icnt]);
   }

   ArrayReverse(ptr,isize);
   

   return 0;
}