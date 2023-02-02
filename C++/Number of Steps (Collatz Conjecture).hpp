// Number of Steps (Collatz Conjecture)

#include <iostream>

int main(){

int number,steps=0;
std::cout<<"Enter the number: ";
std::cin>>number;

for (;number!=1;steps++){

  if (number%2==0){
    number= number / 2;
  }
  else{
    number= 3*number + 1;
  }

}

std::cout<<"Number of steps: "<<steps;

}