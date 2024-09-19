#include<stdio.h>
int main()
{
   float simple_interest, principal,     rate_of_interest,  time_period;

    printf("Enter the amount: ");
    scanf("%f", &principal);
    printf("\n Enter rate:");
    scanf("%f", &rate_of_interest);
    printf("\n Enter the time:");
    scanf("%f",&time_period);
  

 
    if (principal>=100.0 && principal<=1000000.0)
    {
        if (rate_of_interest>=5.0 && rate_of_interest<=10.0)
        {
            if (time_period>=1.0 &&  time_period<=10.0)
            { 
                simple_interest = principal*(rate_of_interest/100)*time_period;
                printf("The interest is: %.2f", simple_interest);
            }
            
            else
            {
                printf("The time is invalid");
            }
        }
        else
        {
            printf("The rate is invalid");
        }
    }
    else
    {
        printf("The amount entered is invalid");
    }
  return 0;
}