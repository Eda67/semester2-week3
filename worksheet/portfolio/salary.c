
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Syeda Mahmuda 
 * ID: clwr0502
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   double salary = 36250.0;
    double ni_rate = 0.08;
    double tax_rate = 0.15;
    double ni_contribution;
    double salary_after_ni;
    double taxable_salary;
    double tax_contribution;
    double take_home_salary;

    // calculate the deductions and final take-home salary
    ni_contribution = salary * ni_rate;
    salary_after_ni = salary - ni_contribution;
    taxable_salary = salary_after_ni - 12500.0;

    if (taxable_salary < 0) {
        taxable_salary = 0;
    }

    tax_contribution = taxable_salary * tax_rate;
    take_home_salary = salary_after_ni - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
 }