/**
*************************************************
Polymorphism
*************************************************
Let's say you have a programmatic pet store. It has a few different types of animals, it has cats, dogs, bird, and fish. All of these animals have data that needs tracked and animal-specific behaviors, not to mention specific details like names and colors. We could create a bunch of arrays to hold information for each individual animal, and arrays to hold lists of animals, but... gross!

Using what we just discussed, we could create an object for each animal, but that leads to a lot of repeated code. All animals eat, all animals sleep, and have weight, color, and etc!

Introducing... Polymorphism

Polymorphism is the idea that of building code that can take a number of definitions, often based on an "is-a" relationship. 
Wikipedia definition -> the provision of a single interface to entities of different types.
i.e. a fish *is-an* anmial, a cat *is a* mammal which *is an* animal.
This introduces the idea of super or parent objects, and child objects, where all animals at the petstore are animals, and all dogs and cats are mammals, and all mammals are animals. This allows for maximum code reuse.


The animals have attributes like weight and color and behaviors like eating.
The mammals have attributes like hair and behaviors like speaking.

*/

int main()
{
    return 0;
}