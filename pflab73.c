#include<stdio.h>

int main()

{
  int num[10];
  int min;
  int i;
  int max;
  
  
  for (i=0;i<=9;i++)
  {
    printf("enter the input: ");
    scanf("%d",&num[i]);
    if(i==0)
    {
        max = num[0];
        min = num[0];
    }
    if(num[i]>max)
    {
       max = num[i];
    }
    if(num[i]<min)
    {
       min = num[i];
    }

  }
  printf("Minimum Number = %d \n", min );
  printf("Maximum Number = %d", max );
 
 return 0;
}