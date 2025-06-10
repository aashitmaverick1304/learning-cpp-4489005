// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include<vector>
using namespace std;
int main(){
    vector<int> primes;
    cout<<"vector has "<<primes.size()<<" elements"<<endl;
    primes.push_back(2);
    primes.push_back(4);
    primes.push_back(6);
    primes.push_back(8);
    cout<<"element at index 2 is :"<<primes[1]<<endl;
    primes[1]=99;
    cout<<"element at index 2 is :"<<primes[1]<<endl;
    cout << endl << endl;
    return (0);
}
