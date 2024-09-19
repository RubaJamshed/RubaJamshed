#include <stdio.h>
int main()
{
    float distance_single_trip = 1207.00;
    float fuel_price_forward = 118.00;   
    float fuel_price_return = 123.00;   
    float total_distance;
    float total_fuel_consumed;
    float fuel_avg;
    float forward_trip_cost;
    float return_trip_cost;
    float total_fuel_cost;
    
    printf("Enter the car's fuel average:");
    scanf("%f", &fuel_avg);
   
    if (fuel_avg > 0)
   {
    total_distance = 2 * distance_single_trip;
        
    total_fuel_consumed = total_distance / fuel_avg;

    forward_trip_cost = (distance_single_trip / fuel_avg) * fuel_price_forward;
    
    return_trip_cost = (distance_single_trip / fuel_avg) * fuel_price_return;
    
    total_fuel_cost = forward_trip_cost + return_trip_cost;

    printf("\n Total fuel cost for both trips:%.2f", total_fuel_cost);
    printf("\n Total fuel consumed for both trips: %.2f litres", total_fuel_consumed);
   }
   else 
    {
        printf("\n The fuel average should be positive");
    }
   
  return 0;
}
