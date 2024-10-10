


#include<stdio.h>
int main()
{

    int num;
    int i; 
    int count = 0; 
    int orgn;
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
            printf("\nThe number is a multiple digit number");
        }
        else
       { 
            printf("\nThe number is a single digit number");
       }
    }
    if (orgn<2)
    {
        printf("Number us neither prime nor composite");
    }
    else if (orgn>=2)
    { 
     for(i=2;i*i<=orgn;i++)
     {

        if (orgn%i==0)
        {

            printf("\nnumber is composite");
        }

        else if (orgn%i!=0)
        {
            printf("\nnumber is prime");

        }
    }
   }
 return