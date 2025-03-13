#include<stdio.h>
#include<stdlib.h>
int *ptr = NULL;
static int lenght;

int QueueArray(int Arr[],int Num)
{
   lenght++;
   int *ctr=NULL;
   ctr=(int *) malloc(lenght*sizeof(int));
   
   for(int i=0;i<lenght;i++)
   {
      
      ctr[i]=Arr[i];
      ctr[lenght-1] = Num;
      
   }
   
   ptr=ctr;
}

int main()
{
   
   int iSize = 0;
   int icnt = 0;
   int Num = 0;
   printf("Enter the Number of array : \n");
   scanf("%d",&iSize);

   lenght=iSize;

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
      QueueArray(ptr,Num);

      for(int j=0;j<lenght;j++)
      {
         printf("%d\t",ptr[j]);
      }
      printf("\n");
   }
   
   return 0;
}