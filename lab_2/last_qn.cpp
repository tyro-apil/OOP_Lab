/*
Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst,
programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the 
salaries in year 2009 are

Chief executive officer Rs. 35000/m

Information officer Rs. 25000/m

System analyst Rs. 24000/m

Programmer Rs. 18000/m

Make a function that takes two arguments; one salary and the other increment. Use proper default argument.
*/

#include<iostream>
#include<iomanip>

float curr_salary(float prev_salary, int increase=12);

int main()
{
    float ceo_inc = 35000.0, io_inc = 25000.0, sa_inc = 24000.0, prog_inc = 18000.0;
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout << "Salary of ceo = " << curr_salary(ceo_inc, 9)<<std::endl;
    std::cout << "Salary of information officer = " << curr_salary(io_inc, 10)<<std::endl;
    std::cout << "Salary of system analyst = " << curr_salary(sa_inc)<<std::endl;
    std::cout << "Salary of programmer = " << curr_salary(prog_inc)<<std::endl;
    return 0;
}

float curr_salary(float prev_salary, int increase)
{
    return (prev_salary * (1 + increase/100.0));
}
