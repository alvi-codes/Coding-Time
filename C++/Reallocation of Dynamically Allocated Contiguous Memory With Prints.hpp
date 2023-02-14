// Reallocation of Dynamically Allocated Contiguous Memory With Prints

#include <iostream>
#include <fstream>
#include <cstdlib>
 
int main(){
  std::ifstream infile;
  infile.open("input.txt");
 
  if(!infile.is_open()){
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
  }
 
  int* p;
  int size = 0;
  int capacity = 1;
 
  p = new int[capacity];
 
  int n; 
 
  while(infile >> n){
 
    if(capacity <= size){
 
      capacity = capacity * 2;
 
      int* tmp_p;
      tmp_p = new int[capacity];
    
      for(int i = 0; i < size; i++){
        tmp_p[i] = p[i];
      }
      
      delete[] p;
      
      p = tmp_p;
      
    }
    std::cout<<" "<<std::endl;
    
    p[size] = n;
    std::cout<<n<<" was added"<<std::endl;
    
    size = size + 1;
    std::cout<<"size: "<<size<<std::endl;
    
    std::cout<<"capacity: "<<capacity<<std::endl;
  }

  std::cout<<" "<<std::endl;
  for(int i = 0; i < size; i++){
    std::cout << p[i] << std::endl;
  }
 
  delete[] p;
}