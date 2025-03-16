#include<stdio.h>
#include<stdbool.h>
int main()
{
   int Arr[7]={10,20,30,40,30,20,10};

  int L = 7-1;
  bool flag=false;

  for(int i = 0; i < L;i++)
  {
    if(Arr[i] == Arr[L])
    {
      flag = true;
    }
    else{
      flag=false;
      break;
    }
    L--;
  }
  if(flag)
  {
   printf("Number is palindrome\n");
  }
  else
  {
   printf("Number is not palindrome\n");
  }


   return 0;
}