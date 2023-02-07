// Recursive Power
 
#include <iostream>

double mpow(double x, int n){
  if (n==0){
    return 1;
  }
  else{
    return x*mpow(x, n-1);
  }
}

int main(){
  std::cout<< mpow(5,3) <<std::endl;
}