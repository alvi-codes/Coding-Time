// Copy Constructor 

#include <iostream>
 
class SomeClass{
 
public:
 
    SomeClass(int idinput) : id(idinput) { 
      std::cout << "object with id " << id << " instantiated" << std::endl;
    }
 
    int get_id() const {
        return id;
    }
 
private:
 
    int id;
 
};
 
int main(){
    SomeClass s1(1);
 
    SomeClass s2(s1);

    std::cout << "s1: " << s1.get_id() << std::endl;
    std::cout << "s2: " << s2.get_id() << std::endl;
}