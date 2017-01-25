/* When to use pointers */

/*
Pointers provide a lot of flexability, but as the saying goes, with great power 
comes great responsibility.

In a lot of cases just creating an instance to your object, type, or struct on the stack
will work fine and is preferable. Leave the heavy lifting to the OS.
*/


// The actual definition of this class is elsewhere, and we won't #include it here
class myObjectDefinedElsewhere;

int main()
{
    //
    // Forward Declarations
    //
    /* Can be declared as a pointer, but cannot be accessed or used.
     * The main benefit of this is compilation speed in large projects.
     */
    myObjectDefinedElsewhere *forwadDeclare;


    return 0;
}
