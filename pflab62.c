#include<stdio.h>
int main()
{

    int num;
    int i; 
    int count = 0; 
    int orgn = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    orgn = num;

    if (num<0)
    {
        num=-num;
    }
    do 
    {
      num = num/10;
      count++;
    } 
    while(num!=0);
    {
        if(count>1)
        {
            printf("\nThe number is a %d(multiple) digit number", count);
        }
        else
       { 
            printf("\nThe number is a single digit number");
       }
    }
      
 return 0;
}