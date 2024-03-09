#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);
    double area();
    double perimeter();
};

#endif

