// Overloading

#include <iostream>
#include <string>
 
void f(){
   std::cout << "no parameters version" << std::endl;
}
 
void f(int n){
    std::cout << "int version" << std::endl;
}

void f(int n1, int n2){
    std::cout << "two int version" << std::endl;
}

void f(std::string s){
    std::cout << "string version" << std::endl;
}
 
int main(){
    int a, c;
    std::string b;
    f();
    f(a);
    f(a,c);
    f(b);
}