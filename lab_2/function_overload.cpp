/*
Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. 
Decide yourself the types of arguments. Use pass by reference in any one of the function above.
*/

#include <iostream>
#include <iomanip>
float feet_to_inch(float feet=1.00);

int main()
{
    std::cout << std::fixed << std::setprecision(2) ;
    std::cout << 5.00 << " feet = " << feet_to_inch(5.00) << "inch" << std::endl; 
    std::cout << 1.00 << " feet = " << feet_to_inch() << "inch" << std::endl; 
    
    return 0;
}

float feet_to_inch(float feet)
{
    return (feet * 12);
}