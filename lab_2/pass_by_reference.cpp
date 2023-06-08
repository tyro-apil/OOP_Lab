/*
Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by 
using return by reference.
*/

#include<iostream>
#include<iomanip>

float &larger_temperature(float&, float&);

int main()
{
    float temp1, temp2, set_temp;
    std::cout << "Enter two temperatures: ";
    std::cin >> temp1 >> temp2;
    std::cout << "Enter set temperature: ";
    std::cin >> set_temp;
    
    larger_temperature(temp1, temp2) = set_temp;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Temperature 1 = " << temp1 << std::endl << "Temperature 2 = " << temp2 << std::endl;
    return 0;
}

float &larger_temperature(float& temp1, float& temp2)
{
    if (temp1 > temp2)
    {
        return temp1;
    }
    return temp2;
}
