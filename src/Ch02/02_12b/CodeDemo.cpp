// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
using namespace std;
enum cow_purpose {dairy, meat, hide, pet};

// enum cow_purpose {dairy , meat, hide , pet};
//  dairy - 0 , meat - 1, hide - 2 , pet -3
int main(){
    int a;
    int b=pet;
    a = meat;

    cout << "a = " << a << endl;
    cout<<"b = "<<b<<endl;
    cout << endl << endl;
    return (0);
}
