// Destructor

#include <iostream>
 
class SomeClass{
 
public:
 
    SomeClass(int idinput) : id(idinput) { 
      std::cout << "object with id " << id << " instantiated" << std::endl;
    }
 
    ~SomeClass(){
        std::cout << "object with id " << id << " going out of scope" << std::endl;
    }
 
private:
 
    int id;
 
};
 
void f(){
    SomeClass s(1);
}
 
int main(){
    SomeClass s(2);
 
    SomeClass* sp;
    sp = new SomeClass(3); 
 
    f();
    delete sp;
}