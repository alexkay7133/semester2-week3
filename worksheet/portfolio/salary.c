
#include <stdio.h>

/*
 * Portfolio submission
 * Name: Alex Kay
 * ID: rsxr0509
 */

int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250.00;
    float NI_percent = 8;
    float tax_percent = 15;

    float final_salary;
    float NI_amount;
    float tax_amount;

    // calculate the deductions and final take-home salary
    NI_amount = salary * (NI_percent / 100);
    final_salary = salary - NI_amount;
    if (final_salary > 12500) {
       tax_amount = (final_salary - 12500) * (tax_percent / 100);
       final_salary = final_salary - tax_amount;
    }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f \n",salary);
    printf("NI contribution £%.2f \n",NI_amount);
    printf("Tax contribution £%.2f \n",tax_amount);
    printf("Take home salary £%.2f \n",final_salary);

    return 0;
}