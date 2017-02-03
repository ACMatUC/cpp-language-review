/*Pointer Basics: What is a pointer?*/

#include <iostream>

int main()
{
    /*We all know what an int is.*/
    int myInt = 5;
    std::cout << *myInt;

    /*And every variable has an address in memory.
     *This address is accessed using the reference operator, &.*/
    std::cout << "Address of myInt: " << &myInt << std::endl;

    /*So, what's the asterisk here do?*/
    int* ptr;

    /*We can make ptr point to a. What is the ampersand doing?*/
    ptr = &myInt;

    /*What value is ptr holding?*/
    std::cout << "ptr: " << ptr << std::endl;

    /*How do we access the value in myInt using ptr?*/
    std::cout << "myInt: " << *ptr << std::endl;
}
