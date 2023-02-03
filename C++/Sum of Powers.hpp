// Sum of Powers

#include <iostream>
#include <cmath>
 
int main(){
  int number, max_power, summation=0;
  std::cout<<"Enter the number: ";
  std::cin>>number;
  std::cout<<"Enter the maximum power: ";
  std::cin>>max_power;

  for(int i = 1; i <= max_power; i++){
    summation=summation+pow(number,i);
  }

  std::cout<<"Sum of Powers: "<<summation;
}
