// Multiplication Table

#include <iostream>

int main(){

int number;
std::cout<<"Number = ";
std::cin>> number;

for(int row = 1; row <= number; row++){
  for(int coloumn = 1; coloumn <= number; coloumn++){
    std::cout<< (coloumn*row)<<"\t";
  }
  std::cout<<"\n";
}

}