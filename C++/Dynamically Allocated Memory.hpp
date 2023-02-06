// Dynamically Allocated Memory 

#include <iostream>

int main(){
  int* pointer;
  pointer = new int;

  *pointer = 2;
  std::cout<< *pointer <<std::endl;

  delete pointer;
  std::cout<< *pointer <<std::endl;
  
  int a;
  a = 5;
  pointer = &a;
  std::cout<< *pointer <<std::endl;

  pointer = new int;
  std::cout<< *pointer <<std::endl;

  delete pointer;
  std::cout<< *pointer <<std::endl;
}