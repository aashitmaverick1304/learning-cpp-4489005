// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"
using namespace std;
int main(){
    vector <cow> cattle;
    cattle.push_back({"Neela",12,cow_purpose::meat});
    cattle.push_back({"Rani",10,cow_purpose::pet});
    cattle.push_back({"Sonu",9,cow_purpose::dairy});
    cattle.push_back({"dalli",11,cow_purpose::pet});
    cout<<"first cow is: "<<cattle.begin()->get_name()<<endl;
    cout<<"second cow is: "<<cattle[1].get_name()<<endl;
    cout<<"first cow is: "<<cattle[2].get_name()<<endl;
    cout<<"first cow is: "<<(cattle.end()-1)->get_name()<<endl;
    return (0);
}
