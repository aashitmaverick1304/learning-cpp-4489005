// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
using namespace std;
int main(){
    const int size=4;
    int age[size];
    float temperature[]={23.3,34.56,12.00,12.23};

    age[0]=23;
    age[1]=34;
    age[2]=54;
    age[3]=20;

    for(int i=0;i<4;i++){
        // cout<<age[i]<<endl;
        cout<<temperature[i]<<endl;
    }
    return (0);
}
