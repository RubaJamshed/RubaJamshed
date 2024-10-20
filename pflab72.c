#include<stdio.h>
int main()
{
  int num[9];
  int reverse;
  int i;
  
  
  for (i=0;i<=8;i++)
  {
    printf("enter the input: ");
    scanf("%d",&num[i]);
  }
  
  for (i=8;i>=0;i--)
  {
    reverse = num[i];
    printf("%d ", reverse);
  }
   
  
 return 0;
}
