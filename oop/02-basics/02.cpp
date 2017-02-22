#include <iostream>

/* This is a class with some better practices. The data is private. */
class Rectangle
{
private:
    /* These are private members of the class Rectangle.
     * They can only be seen from inside the class, and by friend classes. */
    int length;
    int width;
public:
    /* These functions can tell us about the contents of the class. */
    int GetLength() { return length; };
    int GetWidth() { return width; };
    int GetArea() { return length * width; };
    
    /* These functions can set the values of the variables in the class. */
    void SetLength(int l) { length = l; };
    void SetWidth(int w) { width = w; };

    /* This is a constructor. It is used to initialize the class. */
    Rectangle() { length = 0; width = 0; };

    ~Rectangle() { /* This is a destructor. We can clean it up here. */ };
};

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

