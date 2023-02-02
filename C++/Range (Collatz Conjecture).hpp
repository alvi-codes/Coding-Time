// Range (Collatz Conjecture)

#include <iostream>
int main(){

int start_num, stop_num, current_num, steps, max;

std::cout<<"Enter the starting number: ";
std::cin>>start_num;
std::cout<<"Enter the stopping number: ";
std::cin>>stop_num;

current_num=start_num;

for(int add=1; current_num<=stop_num; add++){

  max=current_num;
  steps=0;

  std::cout<<"\n"<<"For "<<current_num<<"\n";
  for (;current_num!=1;steps++){
   if (current_num%2==0){
      current_num= current_num / 2;
    }
    else{
      current_num= 3*current_num + 1;
    }
    if (current_num>max){
      max=current_num;
    }
  }
  
  std::cout<<"Number of steps to reach 1: "<<steps<<std::endl;
  std::cout<<"Maximum number generated in the process: "<<max<<std::endl;
  current_num=start_num+add;
    
}
}