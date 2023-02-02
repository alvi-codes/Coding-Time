// Multiplication As Repeated Sum
#include <iostream>

int main(){
  double num, temp;
  int counter=0, times; 
  
  std::cin>>num>>times;

  while(counter<times){
    temp=temp+num;
    counter++;
  }
  std::cout<<"Result: "<<temp;
}
