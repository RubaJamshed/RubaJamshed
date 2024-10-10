#include<stdio.h>
int main()
{ 
  int num;
  int count=0;
  
  printf("Enter the number:");
  scanf("%d",&num);

  if (num<0)
  { 
    num = -num;
  }
  
  while(num != 0)
  {
    num = num/10;
    count++;
  }
  
  if (count>1)
  {
    printf("the number is a multiple-digit number\n");
  }
  else
  {
    printf("the number is a single-digit number\n");
  }
  
  return 0;

}


