// Testing The Wrong Version 

#include <iostream>

int main(){
  int user_input;
  bool factor_found = false;

  std::cout<< "Enter an integer greater than 1: \n";
  std::cin>>user_input;

  for (int candidate_factor = 2; candidate_factor < user_input; candidate_factor++){
    std::cout<< "\n \n*** Top of For Loop \n";
    std::cout<<"Candidate Factor: "<< candidate_factor<<"\n";
    std::cout<<"factor_found: "<<factor_found<<"\n";

    if (user_input % candidate_factor == 0){
      std::cout<< "Entering The Conditional \n";
      factor_found= true;
      std::cout<< "factor_found set to: "<<factor_found<<"\n";
    }
    else{
      std::cout<< "Entering The Else \n";
      factor_found=false;
      std::cout<< "factor_found set to: "<<factor_found<<"\n";
    }

    std::cout<<"*** Bottom of For Loop \n";
  }


  if(factor_found==true){
    std::cout<<"\nThe number input is NOT PRIME.";
  }
  else{
    std::cout<<"\nThe number input is PRIME.";
  }
}