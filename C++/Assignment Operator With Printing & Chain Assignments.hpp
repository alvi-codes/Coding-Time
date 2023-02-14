// Assignment Operator With Printing & Chain Assignments 

#include <iostream>
 
class SomeClass{
 
public:
 
    SomeClass(int idinput) : id(idinput) { 
      std::cout << "object with id " << id << " instantiated" << std::endl;
    }
 
    SomeClass& operator=(const SomeClass& s){
        std::cout << "assignment operator" << std::endl;
        id = s.id;
        return *this;
    }
 
    int get_id() const {
        return id;
    }
 
private:
 
    int id;
 
};



int main(){
    SomeClass s1(1);
    SomeClass s2(2);
    SomeClass s3(3);
 
    std::cout << "s1: " << s1.get_id() << std::endl;
    std::cout << "s2: " << s2.get_id() << std::endl;
    std::cout << "s3: " << s3.get_id() << std::endl;
 
   // s3 = s2 = s1; 
    s3.operator=(s2.operator=(s1));
  
    std::cout << "s1: " << s1.get_id() << std::endl;
    std::cout << "s2: " << s2.get_id() << std::endl;
    std::cout << "s3: " << s3.get_id() << std::endl;
}
