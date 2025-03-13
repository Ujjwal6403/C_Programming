#include"ArrayOperation.h"
#include<stdlib.h>

int main()
{
   int arr[]={10,20,30,10,50,10,20,30,10};
   int *ptr=NULL;
   ptr=(int *)malloc (9*sizeof(int));
   ptr=SortArrayWithASCAndReplaceDuplicateEleWithzero(arr,9);
   for(int i=0;i<11;i++)
   {
      printf("%d\t",ptr[i]);
   }
}