#include<stdio.h>

int main()
{
   int arr[]={10,60,48,91,37};
   int brr[]={10,55,50,91,37,65,77};  //10 60 55 48 50 91 
   int temp=0;

   for(int i=0;i<7;i++)
   {
      if(arr[temp-1]==brr[i] && i<temp)
      {
         continue;
      }
      else
         printf("%d\t",brr[i]);
      for(int j=temp;j<5;j++)
      {
         if(arr[j]!=brr[i])
         {
            printf("%d\t",arr[j]);
            temp=j+1;
            break;
         }
      }
   }
}