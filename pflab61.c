

#include<stdio.h>
int main()
{   
   int value;
   int sum=0;
   
   do
   {
    printf("Enter the value(0 to stop):");
    scanf("%d", &value);
     
    sum = sum + value;
    printf("Enter the sum: %d\n",sum);
   }

   while(value != 0);
   printf("The sum is: %d\n",sum);

   return 0;
}
     
     
