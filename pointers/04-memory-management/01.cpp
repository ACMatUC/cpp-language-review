/*Memory Management*/

#include <iostream>

int main()
{
    /*The "new" keyword - what does it do?*/
    int* arr = new int[5];
    
    /*We now own the memory space for 5 integers.
     *This memory goes on the heap instead of the stack.*/

    /*Automatic vs dynamic memory
     *   - Automatic: allocates memory based on scope, memory goes on stack
     *   - Dynamic: you control how to allocate memory, memory goes on heap
     **/

    /*We own the memory, so we are responsible for giving it back to the OS.*/
    delete[] arr;

    /*There are two delete operators: delete and delete[]
     *delete will return one variable to the OS.
     *since we have 5 integers, we need to specify to delete the whole array.*/
}
