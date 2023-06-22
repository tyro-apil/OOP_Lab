//q1.cpp
/*
Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and
 object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make 
 conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class 
 Celsius that converts to Fahrenheit scale and returns the value.
*/

#include <iostream>
#include <iomanip>

class Celsius{
    private:
        float temperature;
    public:
        Celsius(){
            temperature = 0.0;
        }
        Celsius(float temp){
            temperature=temp;
        }
        float toFahrenheit();
};

class Fahrenheit{
    private:
        float temperature;
    public:
        Fahrenheit(){
            temperature = 0.0;
        }
        Fahrenheit(float temp){
            temperature=temp;
        }
        float toCelsius();
};


float Celsius::toFahrenheit(){
    return 32 + 9*temperature/5;
}

float Fahrenheit::toCelsius(){
    return 5*(temperature-32)/9;
}

int main(){
    Celsius c1;
    Fahrenheit f1(300);

    std::cout<<c1.toFahrenheit()<<std::endl;
    std::cout<<f1.toCelsius()<<std::endl;
    return 0;
}

