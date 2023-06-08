/*
Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and 
print out the values in the format 11/28/2004 by function. Pass the structure to the function
*/

#include <iostream>
#include <iomanip>

typedef struct date
{
    int day, month, year;
} Date;

void show_date(Date*);

int main()
{
    Date calendar;
    std::cout<<"Enter day, month and year: ";
    std::cin>>calendar.day >> calendar.month >> calendar.year;
    show_date(&calendar);
    return 0;
}

void show_date(Date* date_format)
{
    std::cout<< std::setw(2) << date_format->month << "/" << std::setw(2) << date_format->day << "/" << std::setw(4) <<date_format->year << std::endl;
}