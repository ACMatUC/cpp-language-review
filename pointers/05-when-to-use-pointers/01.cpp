/* When to use pointers */

/*
Pointers provide a lot of flexibility, but as the saying goes, with great power 
comes great responsibility.

In a lot of cases just creating an instance to your object, type, or struct on the stack
will work fine and is preferable. Leave the heavy lifting to the OS.

Polymorphic behavior can only be accomplished through pointers. More on that when we review OOP!

Some functions require a pointer, often in C libraries. In these cases it's unavoidable to use a pointer.


Othertimes you might need to pass a variable by reference as previously discussed. Almost always it's preferable to pass
using the reference operator. It's safer, less work, and takes advantages of the nice things that your Operating System
is so kind to give to you.
*/

#include <iostream>

// The actual definition of this class is elsewhere, and we won't #include it here
class myObjectDefinedElsewhere;

void passByPntr(int *ptr);
void passByRefOperator(int &ref);

int main()
{
    //
    // Forward Declarations
    //
    /* Can be declared as a pointer, but cannot be accessed or used.
     * The main benefit of this is compilation speed in large projects.
     */
    myObjectDefinedElsewhere *forwadDeclare;

    int a = 2;
    int *ptr = &a;
    int myInt = 0;
    passByPntr(ptr);
    passByRefOperator(myInt);
    std::cout << *ptr << " " << myInt << std::endl;

    return 0;
}

void passByPntr(int *ptr)
{
    *ptr = 5;
}

void passByRefOperator(int &ref)
{
    ref = 5;
}