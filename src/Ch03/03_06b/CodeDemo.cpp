// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;
int main(){
    int a=25;
    int *ptr;
    ptr= &a;
    cout<< "value of a is : "<<a<<endl;
    cout<< "address of a is : "<<&a<<endl;
    cout<< "where  ptr is pointing : "<<ptr<<endl;
    cout<< "value at which ptr is pointing : "<<*ptr<<endl;
    cout<< "address of ptr pointer : "<<&ptr<<endl;
    cout << endl << endl;
    return (0);
}
