/ The Average So Far
#include <iostream>

int main(){
  double number=1, count_of_inputs=0, total_so_far=0;

  while(number != 0){
    std::cout<<"Enter a number: ";
    std::cin>>number;
    total_so_far=total_so_far+number;
    count_of_inputs++;
    std::cout<<"Average so far: "<< (total_so_far/count_of_inputs) << std::endl;
  }
}