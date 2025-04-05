// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
using namespace std;
#include <typeinfo>
int main(){
    auto i=23456789;
    auto j=23.4;
    auto k=true;
    auto m="Aashit";
    cout<<"type of i is: "<<typeid(i).name();
    cout<<"type of m is: "<<typeid(m).name(); // Pkc - pointer constant character
    cout << endl << endl;
    return (0);
}
