// Dynamic Allocation & Deallocation of Contiguous Memory

#include <iostream>
 
int main() {
 
  int* p;
 
  p = new int[5];
 
  p[0] = 10;
  p[1] = 20;
  p[2] = 30;
 
  for(int i = 0; i < 3; i++){
    std::cout << p[i] << std::endl;
  }

  delete[] p;

}