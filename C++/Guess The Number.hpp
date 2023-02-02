// Guess The Number

#include <iostream>
#include <string>

int main(){

  std::cout<<"\n*** Guess a number between 0 and 100 *** \n \n";
  std::string user_reaction="";
  int max=100, min=0, num;
  
  while (user_reaction!="="){

    num=(max+min)/2;
    std::cout<<"Did you guess '<' or '=' or '>' "<< num << "? \n";
    std::cin>>user_reaction;

    if (user_reaction==">"){
      min=num;
    }
    if (user_reaction=="<"){
      max=num;
    }
    
  }
}