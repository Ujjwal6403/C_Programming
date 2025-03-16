#include<stdio.h>
#include<stdlib.h>
int *DeleteAtPos(int arr[], int lenght, int pos)
{ // arr={10,20,30,40,50};   len=5   pos 3   number 105
   // validation or filtter
   if(lenght < pos)
   {
      printf("It is not posible to add number because array index is grether than sizeof array\n");
      return 1;
   }

   int *ptr = NULL;

   ptr =(int *)malloc(lenght-1*sizeof(arr[0]));

//1 2 3 4 5      10
   for (int i = 0; i < lenght; i++)
   {
      if(i == pos)
      {
         ptr[i]=arr[i+1];
      }
      else if(i > pos)
      {
         ptr[i] = arr[i];
      }
      else
      {
         ptr[i] = arr[i];
      }
   }
   //print
   for(int k = 0;k < lenght;k++)
   {
      printf("%d\t",ptr[k]);
   }
   return ptr;
}
int main()
{
   int Arr[5] = {10, 20, 20,40,50};
   // int *ptr = NULL;
   // int isize = 0;
   // int iIndex = 0;

   // printf("Enter Number of element\n");
   // scanf("%d",&isize);
   // ptr=(int *) malloc(isize*sizeof(int));
   
   // printf("Enter the element in array:\n");
   // for(int i=0;i<isize;i++)
   // {
   //    scanf("%d",&ptr[i]);
   // }
   // printf("element in array:\n");
   // for(int i=0;i<isize;i++)
   // {
   //    printf("%d",ptr[i]);
   // }

   // printf("Enter Index\n");
   // scanf("%d",&iIndex);
   
   // ptr = (ptr,isize,iIndex);
   DeleteAtPos(Arr,5,3);
   return 0;
}
