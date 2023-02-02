// X^n using a for loop
#include <iostream>

int main(){
  int number, power, result=1;
  
  std::cout<<"Enter the number: ";
  std::cin>>number;
  std::cout<<"Enter the power: ";
  std::cin>>power;

  for(int i = 0; i < power; i++ ){
    result=result*number;
  }

  std::cout<<"The result is: "<<result;
}