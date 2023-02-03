// Our Own Simplified Power With Negative Exponent 

#include <iostream>

double power(double base, double exponent){
  double value=1;

  if (exponent<0){
    for (int i=-1; i >= exponent; i--){
    value=value*(1/base);
    }
  }

  if (exponent>0){
    for (int i=1; i <= exponent; i++){
      value=value*base;
    }
  }

  return value;
}
 


int main(){
    std::cout << "2^-2: " << power(2, -2) << std::endl;
    std::cout << "1^-3: " << power(1, -3) << std::endl;
    std::cout << "3^-2: " << power(3, -2) << std::endl;
}
