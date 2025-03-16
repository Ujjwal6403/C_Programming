#include<stdio.h>

int main()
{
   int arr[5]={10,11,15,30,55};
   int temp=arr[0];
   int i=0;
   for(int i=0;i<5;i++)
   {
      if(arr[i]+1==arr[i+1])
      {
        printf("%d\t",arr[i]);
      }
      else
      {
        int icnt=arr[i];
        while (icnt<arr[i+1])
        {
            printf("%d\t",icnt);
            icnt++;
        }
        
      }
   }
   printf("%d\t",arr[4]);
   return 0;
}