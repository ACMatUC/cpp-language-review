#include <iostream>

/* This is a class. This class holds some basic information about our rectangle. */
class Rectangle
{
public:
    int length;
    int width;
};

int main()
{
    /* A class name is used like any other type. */
    /* Rectangle isn't a variable, it's a type. */
    Rectangle r;
    /* Now we own a Rectangle called R. This is just like owning an
     * int called myint. */

    /* We can access parts of the rectangle using a period. */
    r.length = 3;
    r.width = 4;

    /* Now we can access the length and width of the rectangle. */
    std::cout << "length: " << r.length << " width: " << r.width << std::endl;
}

