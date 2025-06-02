// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

// enum class is a good practice than enum class
int main(){
    int meat = 8;
    int a;

    a = (int) cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
