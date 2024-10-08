#include <iostream>

int main(){

    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // also known as read only

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << '\n' ;

    return 0;

}