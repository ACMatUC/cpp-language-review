#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

/* This is a class with the best practices. */
class Rectangle
{
private:
    int length;
    int width;
public:
    int GetLength();
    int GetWidth();
    int GetArea();
    
    /* These functions can set the values of the variables in the class. */
    void SetLength(int l);
    void SetWidth(int w);

    /* This is a constructor. It is used to initialize the class. */
    Rectangle();

    ~Rectangle();
};

#endif
