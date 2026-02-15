
#include <stdio.h>
#include <math.h>
/*
 * Potrfolio submission
 * Name: Yanjani Nkhata
 * ID: 201930814
 */

 int main( void ) {

    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    float salary = 36250; //£14000-£40000
    float NI = 0.08; //0%-10%
    float tax = 0.15; //10%-30%
    
    
    float NI_contribution = salary * NI;
    float post_NI = salary - NI_contribution;
    float up_for_tax = post_NI - 12500;
    float tax_contribution = up_for_tax * tax;
    float take_home_sal = post_NI - (up_for_tax * tax);

    printf("Salary £%.2f\n",salary);
    printf("NI contribution: £%.2f\n",NI_contribution);
    printf("Tax contribution: £%.2f\n",tax_contribution);
    printf("Take home salary: £%.2f\n",take_home_sal);

    return 0;
 }