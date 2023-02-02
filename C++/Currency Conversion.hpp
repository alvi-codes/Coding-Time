// Currency Conversion
#include <iostream>
int main(){
  double amount, rate;
  std::cout<<"Enter the amount of money in GBP: "<<std::endl;
  std::cin>>amount;
  std::cout<<"Type in the current GBP to EUR exchange rate: "<<std::endl;
  std::cin>>rate;
  std::cout<<"The equivalvent amount in EUR is "<<rate*amount<<"!";

}