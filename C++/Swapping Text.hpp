// Swapping Text

#include <iostream>
#include <string>

void swap_function(std::string & text_1, std::string & text_2){
  std::string temp;
  temp=text_1;
  text_1=text_2;
  text_2=temp;
}

int main(){
  std::string text_1, text_2;
  std::cout<<"Enter two words: \n";
  std::cin>>text_1>>text_2;

  swap_function(text_1,text_2);

  std::cout<<"The swapped words are: \n";
  std::cout<<text_1<<"\n"<<text_2;
}
