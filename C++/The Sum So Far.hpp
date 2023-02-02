// The Sum So Far
#include <iostream>

int main(){
  double number=1, total_so_far=0;

  while(number != 0){
    std::cout<<"Enter the number: ";
    std::cin>>number;
    total_so_far=total_so_far+number;
    std::cout<<"Total so far: "<< total_so_far << std::endl;
  }
}