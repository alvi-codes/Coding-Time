// Fibonacci Sequence
 
#include <iostream>

double fib(int n){
  if (n==0){
    return 0;
  } 
  else if (n==1){
    return 1;
  }
  else{
    return ( fib(n-1) + fib(n-2) );
  }
}

int main(){
  std::cout<< fib(10) <<std::endl;
}