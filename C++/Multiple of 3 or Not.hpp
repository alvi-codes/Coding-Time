// Multiple of 3 or not
#include <iostream>
int main(){
  int num;
  std::cout<<"Enter the number:"<<std::endl;
  std::cin>>num;
  if ((num%3)==0){
    std::cout<<"The number is a multiple of 3.";
  }
  else{
    std::cout<<"The number is not a multiple of 3.";
  }
}