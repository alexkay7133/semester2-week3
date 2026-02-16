
#include <stdio.h>

/*
 * Portfolio submission
 * Name: Alex Kay
 * ID: rsxr0509
 */

int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250.00;
    int NI_percent = 8;
    int tax_percent = 15;

    float final_salary = 0;
    int NI_amount = 0;
    int tax_amount = 0;

    // calculate the deductions and final take-home salary
    NI_amount = salary * (NI_percent / 100);
    final_salary = salary - NI_amount
    if (final_salary > 12500) {
        tax_amount = (final_salary - 12500) * (tax_percent / 100)
        final_salary = final_salary - tax_amount
    }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f",salary);
    printf("NI contribution £%.2f",NI_amount);
    printf("Tax contribution £%.2f",tax_amount);
    printf("Take home salary £%.2f",final_salary);

    return 0;
 }