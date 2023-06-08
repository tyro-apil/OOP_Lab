/*
Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by 
using return by reference.
*/

#include<iostream>
#include<iomanip>

float larger_temperature(float*, float*);

int main()
{
    float temp1 = 500.1, temp2=350.5;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Higher temperature between " << temp1 << " and " << temp2 << " is " << larger_temperature(&temp1, &temp2) << std::endl;
    
    return 0;
}

float larger_temperature(float* temp1, float* temp2)
{
    return ((*temp1 > *temp2)? *temp1: *temp2);
}
