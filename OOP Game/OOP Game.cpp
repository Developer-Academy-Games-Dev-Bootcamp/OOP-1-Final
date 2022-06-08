// OOP Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Animal.h"

int main()
{
    Dog dog = Dog("Fido");
	Animal cat = Animal("Princess", "A naughty girl");

	cat.linked_animals["house mate"] = dog;
    dog.linked_animals["house mate"] = cat;
    std::cout << dog.getName() + "\n";
    std::cout << dog.getDescription() + "\n";
    std::cout << 
        dog.linked_animals["house mate"].linked_animals["house mate"].getName() + 
        " is the housemate of the housemate\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
