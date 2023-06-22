//q5
/*
    Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a 
    particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() 
    member function to set report attributes by passing the arguments and member function displayreport() to show the report according to 
    the parameter passed. Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...
*/

#include<iostream>

class employee{
    private:
        int id, year;
        float bonus, overtime;
    public:
        void setpara(int, float, float, int);
        void displayreport();
};

void employee::setpara(int id, float bonus, float overtime, int year){
    this->id = id;
    this->bonus = bonus;
    this->overtime = overtime;
    this->year = year;
}

void employee::displayreport(){
    std::cout<<"An employee with "<<id<<" has received Rs "<<bonus<<" as a bonus"<<std::endl;
    std::cout<<"and"<<std::endl;
    std::cout<<"had worked "<<overtime<<" hours as overtime in the year "<<year<<std::endl;
}

int main(){
    employee e[2];
    e[0].setpara(5, 1200, 80, 2000);
    e[1].setpara(30, 2000, 150, 2010);
    e[0].displayreport();
    e[1].displayreport();
    return 0;
}