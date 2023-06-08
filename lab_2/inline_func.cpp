/*
Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline 
function to display the net payment to the employee by the company.
*/

#include<iostream>

inline float calc_tax(float);

int main()
{
    float income = 51289.23;
    std::cout<<"Net payment for salary "<< income << " = "<<income - calc_tax(income)<<std::endl;
    return 0;
}

inline float calc_tax(float income)
{
    return (0.1 * income);
}