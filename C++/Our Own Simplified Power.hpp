// Our Own Simplified Power

#include <iostream>

double power(double base, double exponent){
  double value=1;
  for (int i=1; i <= exponent; i++){
    value=value*base;
  }
  return value;
}
 
int main(){
    std::cout << "2^3: " << power(2, 3) << std::endl;
    std::cout << "0.5^2: " << power(0.5, 2) << std::endl;
    std::cout << "1^0: " << power(1, 0) << std::endl;
}
