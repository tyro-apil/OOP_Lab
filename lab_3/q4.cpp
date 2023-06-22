//q4
/*
Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual 
objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the 
classes to create objects in your program.
*/

#include<iostream>
#include<cmath>

#define PI  3.14

class circle{
    private:
        float radius;
    public:
        void set_data(float);
        void show_data();
};

void circle::set_data(float r){
    radius = r;
}

void circle::show_data(){
    std::cout<<"Radius of circle = "<<radius<<std::endl;
    std::cout<<"Area of circle = "<< PI*radius*radius <<std::endl;
    std::cout<<"Perimeter of circle = "<< 2*PI*radius <<std::endl;
}

class rectangle{
    private:
        float length, width;
    public:
        void set_data(float, float);
        void show_data();
};

void rectangle::set_data(float l, float b){
    length = l;
    width = b;
}

void rectangle::show_data(){
    std::cout<<"Length of rectangle = " <<length<<" and breadth = "<<width<<std::endl;
    std::cout<<"Area of rectangle = "<< length*width <<std::endl;
    std::cout<<"Perimeter of rectangle = "<< 2*(length+width) <<std::endl;
}

class triangle{
    private:
        float sideA, sideB, sideC;
    public:
        void set_data(float, float, float);
        void show_data();
};

void triangle::set_data(float a, float b, float c){
    sideA = a;
    sideB = b;
    sideC = c;
}

void triangle::show_data(){
    float s = (sideA + sideB + sideC)/2;
    std::cout<<"Side A = "<<sideA<<" Side B = "<<sideB<<" Side C = "<<sideC <<std::endl;
    std::cout<<"Area of triangle = "<< sqrt(s*(s-sideA)*(s-sideB)*(s-sideC)) << std::endl;
    std::cout<<"Perimeter of triangle = "<< sideA+sideB+sideC <<std::endl;
}

int main(){
    circle c;
    rectangle r;
    triangle tr;

    c.set_data(5);
    r.set_data(4.5, 3.2);
    tr.set_data(5, 4, 3);

    c.show_data();
    r.show_data();
    tr.show_data();

    return 0;
}