// Factorial
#include <iostream>

int main(){
  int number, result=1;
  
  std::cout<<"Enter the number: ";
  std::cin>>number;

  for(int i = 0; i < number; i++){
    result=result*(number-i);
  }

  std::cout<<"The result is: "<<result;
}