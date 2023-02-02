// Maximum And Minimum So Far

#include <iostream>

int main(){
  
  int number, max, min;

  std::cout<<"Number: ";
  std::cin>>number;
  max=number;
  min=number;
  std::cout<<"The maximum so far: "<<max<<"\n";
  std::cout<<"The minimum so far: "<<min<<"\n";
  
  while (number!=0){
    std::cout<<"Number: ";
    std::cin>>number;
    if (number>max){
      max=number;
    }
    if(number<min){
      min=number;
    }
    std::cout<<"The maximum so far: "<<max<<"\n";
    std::cout<<"The minimum so far: "<<min<<"\n";
  }

}