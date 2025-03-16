#include<stdio.h>
#include<stdlib.h>

int SortArrayWithDisendingOrder(int Arr[], int ilength)
{
   for(int i = 0; i < ilength; i++)
   {
      for(int j = 0; j < ilength; j++)
      {
         // if(i != j && Arr[i]==Arr[j])
         // {
         //    Arr[i]=0;
         // }
         if(Arr[j] <Arr[i])
         {
            int temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
         }
      }
   }

   for(int i  = 0; i < ilength; i++)
   {
      printf("desencding order %d\t",Arr[i]);
   }
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

   printf("Element of array :\n");
   for (icnt = 0; icnt < iSize; icnt++)
   {
      printf("%d\n",ptr[icnt]);
   }
   
  SortArrayWithDisendingOrder(ptr,iSize);
   
  
   free(ptr);
   return 0;
}