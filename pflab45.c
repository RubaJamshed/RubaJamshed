
#include<stdio.h>
int main()
{
   int customer_id;
   char customer_name[100];
   int units_consumed;
   float charge_per_unit;
   float bill;
   float surcharge_amount;
   float total_amount;
   
   printf ("enter customer id:");
   scanf ("%d", &customer_id);
   printf ("enter customer name:");
   scanf ("%s",  customer_name);
   printf ("enter units consumed:");
   scanf (" %d", &units_consumed);

    if (units_consumed <= 199)
    {
        charge_per_unit = 16.20;
    }
    else if (units_consumed >= 200 && units_consumed < 300)
    {
        charge_per_unit = 20.10;
    }
    else if (units_consumed >= 300 && units_consumed < 500)
    {
        charge_per_unit = 27.10;
    }
    else if (units_consumed >= 500)
    {
        charge_per_unit = 35.90;
    }
    else
    {
        printf(" Invalid. Enter units consumed again");
        return 1;
    }

    bill = units_consumed * charge_per_unit;

    if (bill> 18000)
    {
      surcharge_amount = 0.15 * bill;
    }

    total_amount=bill + surcharge_amount;
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units_consumed);
    printf("Bill is: %.2f\n", bill);
    printf("Surcharge Amount is: %.2f\n", surcharge_amount);
    printf("Total Bill (including surcharge): %.2f\n", total_amount);
return 0;
}