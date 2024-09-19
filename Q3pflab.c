#include<stdio.h>
int main()
{
   float salary, taxrate, taxratesalary,  salaryafter;

   printf("Enter your salary:");
   scanf("%f", &salary);
   printf("\n Enter your tax rate:");
   scanf("%f", &taxrate);

   taxratesalary = taxrate/100 * salary;
   salaryafter = salary - taxratesalary;

   printf("\n The tax rate salary is: %.2f", taxratesalary);
   printf("\n Salary after tax pay is: %.2f",  salaryafter);

return 0;
}
