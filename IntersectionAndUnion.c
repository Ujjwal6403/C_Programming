#include<stdio.h>

static int flag=0;
int *UnionArray=NULL;
int *InterSection=NULL;

int IntersectionAndUnion(int arr[],int brr[],int length1,int length2)
{
   static int ICount=0;
   static UCount=0;
   int iIndex=0;
   for (int i = 0; i < length1; i++)
   {
      for(int j=0;j<length2;j++)
      {
         if(flag==0)
         {
            if(arr[i]==brr[j])
            {
              ICount++;
            }
         }
         else
         {
            if(arr[i]==brr[j])
            {
               // Intersection
               ICount=ICount-1;
               InterSection[ICount]=brr[j];
            }
            else
            {
               //Union
               //printf("%d\t",brr[j]);
               UCount=UCount-1;
               UnionArray[UCount]=brr[j];
            }
         }
      }
   }
   if(flag==0)
   {
      flag=1;
      UCount=(length1+length2)-ICount;
      //allocate memory
      InterSection=(int *)malloc (ICount*sizeof(int));
      UnionArray=(int *)malloc(UCount*sizeof(int));
      IntersectionAndUnion(arr,brr,length1,length2);

   }

}
int main()
{
   int arr[]={10,20,30,40};
   int brr[]={10,5,20,7,5,6,25,30};
   int *ptr=NULL;
   int *tempPtr=NULL;
   int length1=sizeof(arr)/sizeof(int);
   int length2=sizeof(brr)/sizeof(int);

   // IntersectionAndUnion(arr,brr,length1,length2);
   // for(int i=0;i<9;i++)
   // {
   //    printf("%d\t",UnionArray[i]);
   // }
   for (int i = 0; i < length1; i++)
   {
      for(int j=0;j<length2;j++)
      {
         if(arr[i]==brr[j])
         {
            //printf("%d\n",brr[j]);
         }
         else
         {
            printf("%d\t",brr[j]);
         }
      }
   }
   
}
