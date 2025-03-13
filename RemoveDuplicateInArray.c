#include<stdio.h>
#include<stdlib.h>
int icnt=0; //global
int* SortArrayWithAssendingOrder(int Arr[],int ilenght)
{
   
   for(int i = 0; i < ilenght; i++)
   {
      for(int j = 0; j < ilenght; j++)
      {
         // if(i != j && Arr[i]==Arr[j])
         // {
         //    Arr[i]=0;
         // }
         if(Arr[j] >Arr[i])
         {
            int temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
         }
      }
   }
   // for (int i = 0; i < ilenght; i++)
   // {
   //    printf("%d\t",Arr[i]);
   // }
   
   return Arr;
}
int* RemoveDuplicate(int arr[],int length)
{
   int *ptr=NULL;
   int *TempPtr=NULL;
   int tempsize=0;
   for(int i = 0; i < length; i++)
   {
      for(int j = 0; j < length; j++)
      {
         if(i != j)
         {
            if(arr[i] == arr[j])
            {
               arr[i] = 0;
               icnt++;
            }
         }
      }
   }
   ptr=(int *)malloc(length*sizeof(int));
   tempsize=length-icnt;
   TempPtr=(int *)malloc(tempsize*sizeof(int));
   ptr=SortArrayWithAssendingOrder(arr,10);
   //Added element after remove duplicate inside ptr.
   int zeroCount=icnt-1;
   for(int i = 0; i < length; i++)
   {
     if(ptr[i]!=0)
      {
         TempPtr[i-icnt]=ptr[i];
      }

   }
   return TempPtr;
}

int main()
{
   int Arr[10] = {10,20,20,10,20,45,98,98,34,50};
   int *ptr=NULL;
   int length=10;
   ptr=(int *)malloc((length-icnt)*sizeof(int));
   ptr=RemoveDuplicate(Arr,10);
      //print after Remove
   for(int i=0;i<length-icnt;i++)
   {
      printf("%d\t",ptr[i]);
   }
   return 0;
}