// Number of Steps & Maximum Number (Collatz Conjecture)

#include <iostream>

int main(){

int number,steps=0,max;
std::cout<<"Enter the number: ";
std::cin>>number;
max=number;

for (;number!=1;steps++){

  if (number%2==0){
    number= number / 2;
  }
  else{
    number= 3*number + 1;
  }

  if (number>max){
    max=number;
  }

}

std::cout<<"Number of steps to reach 1: "<<steps<<std::endl;
std::cout<<"Maximum number generated in the process: "<<max;

}