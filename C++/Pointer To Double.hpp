// Pointer To Double

#include <iostream>
 
int main(){
    double A;
    double* pointer; 
 
    pointer = &A;
 
    std::cout << &A << std::endl;
    std::cout << pointer << std::endl;
}