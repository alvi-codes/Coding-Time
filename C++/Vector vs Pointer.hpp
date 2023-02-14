// Vector vs Pointer

#include <iostream>
#include <vector>
 
int main(){
  
  int *p;
  
  p = new int[3];
 
  std::vector<int> v; 
 
  p[0] = 10;

  v.push_back(10); 
 
  std::cout << "p[0]: " << p[0] << std::endl;
  std::cout << "v[0]: " << v[0] << std::endl;
 
  std::cout << "*p: " << *p << std::endl; 
  
  //std::cout << "*v: " << *v << std::endl;
  
  delete[] p;
 
}