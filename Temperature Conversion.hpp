3 // Temperature Conversion
#include <iostream>
int main(){
  double temp;
  std::cout<<"Enter the temperature in Celcius degrees:"<<std::endl;
  std::cin>>temp;
std::cout<<"Equivalent in Fehrenheit degrees: "<<(temp * (9/5.0)) + 32;

}