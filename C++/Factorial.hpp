// Factorial

#include <iostream>

int my_factorial(int input){
  int factorial = 1;
  
  for (int i = 0; i < input; i++){
    factorial = factorial * (input-i);
  }

  return factorial;
}

int main(){
  int number;
  std::cout<<"Enter a number: ";
  std::cin>>number;
  std::cout<<"The factorial of "<< number << " is "<< my_factorial(number);
}