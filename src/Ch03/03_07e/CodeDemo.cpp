// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"
using namespace std;
int main(){
    cow *my_cow;
    my_cow = new cow("Gertie", 3, cow_purpose::hide); // memory dynamically allocated 
    cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;
    
    delete my_cow; // free memory after use
    
    cout << endl << endl;
    return (0);
}
