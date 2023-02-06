// Testing The Dereferencing

#include <iostream>
 
int main(){
    int a;
    int* pointer; 
 
    a = 2;
    pointer = &a;
 
    std::cout << a << std::endl;
    std::cout << *pointer << std::endl;
    
    *pointer = 3;
 
    std::cout << a << std::endl;
    std::cout << *pointer << std::endl;
 
    a = 4;
 
    std::cout << a << std::endl;
    std::cout << *pointer << std::endl;
}
