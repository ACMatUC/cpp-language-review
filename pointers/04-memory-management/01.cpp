/*Memory Management*/

#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    int *array = new int[size];
    delete[] array;
    return 0;
}
