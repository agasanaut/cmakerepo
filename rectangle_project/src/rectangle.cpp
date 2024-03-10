#include "rectangle.h"
#include "../../external/addition.h"
Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::area() {
    return width * height;
}

double Rectangle::perimeter() {
    return 2 * (width + height);
}

#include <iostream>

int main() {
    // Create a Rectangle object with width 5 and height 3
    Rectangle rectangle(5, 3);

    // Calculate and print the area of the rectangle
    std::cout << "Area of the rectangle: " << rectangle.area() << std::endl;

    // Calculate and print the perimeter of the rectangle
    std::cout << "Perimeter of the rectangle: " << rectangle.perimeter() << std::endl;

    // Calc output of lib
    std::cout << "lib out : " << Addition::add(4,5) << std::endl;

    return 0;
}

