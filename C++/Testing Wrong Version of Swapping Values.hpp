// Testing Wrong Version of Swapping Values

#include <iostream>

int main(){
  int num_1, num_2;
  std::cout<<"Enter two numbers: \n";
  std::cin>>num_1>>num_2;

  num_1=num_2;
  num_2=num_1;

  std::cout<<"The swapped numbers are: \n";
  std::cout<<num_1<<"\n"<<num_2;
}