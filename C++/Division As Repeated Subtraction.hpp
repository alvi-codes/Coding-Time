// Division As Repeated Subtraction
#include <iostream>

int main(){
  double number, divide_by, number_of_subtractions=0;
  
  std::cout<<"Enter the number to divide: ";
  std::cin>>number;
  std::cout<<"Divide the number by: ";
  std::cin>>divide_by;

  while(number>=divide_by){
    number=number - divide_by;
    number_of_subtractions++;
  }
  std::cout<<"The Quotient (The Number of Subtractions) = "<<number_of_subtractions<<std::endl;
  std::cout<<"The Remainder (The Left Over Value of The Variable Number) = "<<number;
}