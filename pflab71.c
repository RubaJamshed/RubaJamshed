#include<stdio.h>
int main()
{
  int num[9];
  int sum=0;
  int i;
  
  
  for (i=0;i<=8;i++)
  {
    printf("enter the input: ");
    scanf("%d",&num[i]);
    sum = sum + num[i];
  }
  printf("the sum is:%d ", sum);
 return 0;
}

