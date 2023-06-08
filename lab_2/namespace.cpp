/*
Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named "num" and a function named "fun".
 The "fun" function in "Square" namespace, should return the square of an integer passed as an argument while the "fun" function 
 in "Cube" namespace, should return the cube of an integer passed as an argument. In the main function, set the integer variables 
 "num" of both the namespaces with different values. Then, compute and print the cube of the integer variable "num" of the "Square"
 namespace using the "fun" function of the "Cube" namespace and the square of the integer variable "num" of the "Cube" namespace
  using the "fun" function of the "Square" namespace.

*/
#include<iostream>

namespace Square
{
    int num=2;
    int fun(int n)
    {
        return n*n*n;
    }
}

namespace Cube
{
    int num=3;
    int fun(int n)
    {
        return n*n;
    }
}

int main()
{
    Square::num = 5;
    Cube::num = 4;
    std::cout << "Cube of " << Square::num << " = " << Square::fun(Square::num) << std::endl;
    std::cout << "Square of " << Cube::num << " = " << Cube::fun(Cube::num) << std::endl;

    return 0;
}