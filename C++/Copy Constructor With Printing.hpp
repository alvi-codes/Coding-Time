// Copy Constructor With Printing

#include <iostream>
 
class SomeClass{
 
public:
    SomeClass(int idinput) : id(idinput) { 
      std::cout << "object with id " << id << " instantiated (constructor)" << std::endl;
    }
 
    SomeClass(const SomeClass& ins) : id(ins.id) {
      std::cout << "object with id " << id << " instantiated (copy constructor)" << std::endl;
    }
 
    int get_id() const {
        return id;
    }
 
private:
    int id;
 
};
 
void f1(SomeClass s){
  std::cout << "f1" << std::endl;
}
 
void f2(const SomeClass& s){
  std::cout << "f2" << std::endl;
}



int main(){
    SomeClass s1(1);
 
    SomeClass s2(s1);
 
    f1(s1);
    f2(s1);
 
    std::cout << "s1: " << s1.get_id() << std::endl;
    std::cout << "s2: " << s2.get_id() << std::endl;
}