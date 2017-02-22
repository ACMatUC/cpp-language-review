#include <iostream>
#include "Rectangle.h"

int main()
{
    Rectangle r;
    std::cout << "Initial length: " << r.GetLength() << std::endl;

    /* We can access parts of the rectangle using the functions. */
    r.SetLength(3);
    r.SetWidth(4);

    /* Now we can see that we have modified the rectangle. */
    std::cout << "length: " << r.GetLength() << " width: " << r.GetWidth() << 
        " area: " << r.GetArea() << std::endl;
}
