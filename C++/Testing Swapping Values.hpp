// Testing Swapping Values

#include <iostream>

int main(){
  int num_1, num_2, temp;
  std::cout<<"Enter two numbers: \n";
  std::cin>>num_1>>num_2;

  temp=num_1;
  num_1=num_2;
  num_2=temp;

  std::cout<<"The swapped numbers are: \n";
  std::cout<<num_1<<"\n"<<num_2;
}