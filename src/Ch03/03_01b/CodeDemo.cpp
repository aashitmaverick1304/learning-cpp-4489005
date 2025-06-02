// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

enum cow_purpose {dairy , hide , meat , pet};

struct cow{
    string name;
    int age;
    cow_purpose purpose;
};
int main(){
    cow my_cow;
    my_cow.name="betsy";
    my_cow.age=7;
    my_cow.purpose=cow_purpose::dairy;
    cout << endl << endl;
    return (0);
}
