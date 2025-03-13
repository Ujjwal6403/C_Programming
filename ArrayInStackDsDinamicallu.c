#include<stdio.h>
#include<stdlib.h>
int *ptr = NULL;
static int length;
int stack(int arr[],int number)
{
   length++;
   //filter
   int *ctr=NULL;
   ctr=(int *) malloc(length*sizeof(int));
   ctr[0]=number;
   for(int i=1;i<=length;i++)
   {
      ctr[i]=arr[i-1];
   }
   arr=NULL;
   ptr=ctr;
   
}
int main()
{
   //int Arr[5] = {10,20, 30, 40,50};

   int iSize = 0;
   int icnt = 0;
   int Num = 0;
   printf("Enter the Number of array : \n");
   scanf("%d",&iSize);

   length=iSize;

   ptr = (int *)malloc(iSize *sizeof(int));

   printf("Enter the number :\n");
   for (icnt = 0; icnt < iSize; icnt++)
   {
      scanf("%d",&ptr[icnt]);
   }

   printf("Element of array :\n");
   for (icnt = 0; icnt < iSize; icnt++)
   {
      printf("%d\t",ptr[icnt]);
   }

   printf("\nEnter the Number\n");
   printf("Stop program use negative value eg -1\n");

   while (1)
   {
      scanf("%d",&Num);
      if(Num<0)
         break;
      stack(ptr,Num);

      for(int j=0;j<length;j++)
      {
         printf("%d\t",ptr[j]);
      }
      printf("\n");
   }
   
   // for(int j=0;j<=iSize;j++)
   // {
   //    printf("%d\t",ptr[j]);
   // }
}
