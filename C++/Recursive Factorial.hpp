// Recursive Factorial
 
#include <iostream>

double fact_(int n){
  if (n==0){
    return 1;
  } 
  else{
    return n * fact_(n-1);
  }
}

int main(){
  std::cout<< fact_(3) <<std::endl;
}