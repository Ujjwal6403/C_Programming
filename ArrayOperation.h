#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Define prototype 
int Findmaximum(int Arr[], int ilength);
int Findminimum(int Arr[], int ilength);
int SortArrayWithDisendingOrder(int Arr[], int ilength);
int FindSecondMinMax(int Arr[], int min,int max,int ilength);
int SortArrayWithAssendingOrder(int Arr[],int ilenght);
int* SortArrayWithASCAndReplaceDuplicateEleWithzero(int Arr[],int length);
int FindArrayAvg(int Arr[], int length);
int SumOfArray(int Arr[], int length);
int CountIntegerArray(int Arr[]);
int CountCharacterArray(char Arr[]);
int CountFloatArray(float Arr[]);
int CountDoubleArray(double Arr[]);
int ArrayInsertion();
int ArrayDeletion();
int ArrayIndex(int Arr[], int lenght,int Find);
bool ArrayContain(int Arr[],int lenght, int Find);
int ArrayReverse();

int Findmaximum(int Arr[], int ilength)
{
   int imax = Arr[0];
   for(int icnt = 0; icnt < ilength; icnt++)
   {
      if(Arr[icnt] > imax)
      {
         imax = Arr[icnt];
      }
   }
   return imax;
}

int Findminimum(int Arr[], int ilength)
{
   int iMin = Arr[0];
   for(int icnt = 0; icnt < ilength; icnt++)
   {
      if(Arr[icnt] < iMin)
      {
         iMin = Arr[icnt];
      }
   }
   return iMin;
}

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
}

int FindSecondMinMax(int Arr[], int min,int max,int ilength)
{
   // 66 55 22 44 11    min 11 max 66  length 5
   int secondMax = 0;
   int secondMin = 9;

   for(int icnt = 0; icnt < ilength; icnt++)
   {
      if(Arr[icnt] < max && Arr[icnt] > secondMax)
      {
         secondMax=Arr[icnt];
      }
   }

   for(int icnt = 0; icnt < ilength; icnt++)
   {
      if(Arr[icnt] > min && Arr[icnt] < secondMin)
      {
         secondMin=Arr[icnt];
      }
   }
   return secondMin;
   return secondMax;
}
int SortArrayWithAssendingOrder(int Arr[],int ilenght)
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

}

int* SortArrayWithASCAndReplaceDuplicateEleWithzero(int Arr[],int length)
{
      
   for(int i = 0; i < length; i++)
   {
      for(int j = 0; j < length; j++)
      {
         if(i != j && Arr[i]==Arr[j])
         {
            Arr[i]=0;
         }
         if(Arr[j] >Arr[i])
         {
            int temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
         }
      }
   }
   return Arr;
}

int FindArrayAvg(int Arr[], int length)
{
   int iSum = 0;
   for(int iCnt = 0; iCnt < length; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }
   int Avg = iSum / length;
   return Avg;
}

int SumOfArray(int Arr[], int length)
{
   int iCnt = 0;
   int iSum = 0;
   for (iCnt = 0; iCnt < length; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }
   return iSum;
}

int CountIntegerArray(int Arr[])
{
   return sizeof(Arr)/sizeof(int);
}
int CountCharacterArray(char Arr[])
{
   return sizeof(Arr)/sizeof(char);
}
int CountDoubleArray(double Arr[])
{
   return sizeof(Arr)/sizeof(double);
}
int CountFloatArray(float Arr[])
{
   return sizeof(Arr)/sizeof(float);
}

int ArrayIndex(int Arr[], int lenght,int Find)
{
   for(int i = 0; i < lenght; i++)
   {
      if(Arr[i] == Find)
      {
         return i;
      }
   }
   return -1;
}
bool ArrayContain(int Arr[],int lenght, int Find)
{
   for(int i = 0; i < lenght; i++)
   {
      if(Arr[i] == Find)
      {
         return true;
      }
   }
   return false;
}