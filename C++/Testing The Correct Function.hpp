// Testing The Correct Function

#include <iostream>

void swap_function(int& n_1, int& n_2){
  int temp;
  temp=n_1;
  n_1=n_2;
  n_2=temp;
}

int main(){
  int num_1, num_2;
  std::cout<<"Enter two numbers: \n";
  std::cin>>num_1>>num_2;

  swap_function(num_1,num_2);

  std::cout<<"The swapped numbers are: \n";
  std::cout<<num_1<<"\n"<<num_2;
}
