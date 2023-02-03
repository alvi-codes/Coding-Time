// Testing The Absolute Value Program With Our Own Function

#include <iostream>

double abs(double num){
  double temp;

  if (num<0){
    temp=-num;
  }
  else{
    temp=num;
  }
  
  return temp;
}

int main(){
  double num;

  std::cout<<"Enter a number: ";
  std::cin>>num;

  std::cout<<"|"<<num<<"| = "<<abs(num);
}