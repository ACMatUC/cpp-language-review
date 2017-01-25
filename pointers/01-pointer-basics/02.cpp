/*Pointer Basics: How do you use pointers?*/

#include <iostream>

int main()
{
    /*Here are some integers.*/
    int a = 1;
    int b = 2;
    int c = 3;

    /*Here are some integer pointers.*/
    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;

    /*Here are their values.*/
    std::cout << "*ptr1: " << *ptr1 << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    std::cout << "*ptr3: " << *ptr3 << std::endl;

    /*Now let's do some assignment.*/
    a = 0;
    std::cout << "*ptr1: " << *ptr1 << std::endl;

    *ptr2 = 4;
    std::cout << "b: " << b << std::endl;

    ptr3 = ptr2;
    std::cout << "*ptr3: " << *ptr3 << std::endl;
    std::cout << "c: " << c << std::endl;
}
