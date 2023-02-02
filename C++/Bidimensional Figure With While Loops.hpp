// Bidimensional Figure With While Loops

#include <iostream>

int main(){
  
  int N;
  std::cout<<"N = ";
  std::cin>>N;
  int counter_coloumn, counter_row=0;

  while (counter_row<N){
    counter_coloumn=0;
    while(counter_coloumn<N){
      std::cout<<"*";
      counter_coloumn++;
    }
    counter_row++;
    std::cout<<std::endl;
  }
}