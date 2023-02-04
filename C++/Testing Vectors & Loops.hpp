//Testing Vectors & Loops

#include <iostream>
#include <vector>

int main(){
  std::vector<int> sequence;
  
  int temp=1;

  std::cout<<"Enter a sequnce: \n";
  while (temp != 0){
    std::cin>>temp;
    sequence.push_back(temp);
  }

  std::cout<<"\nEntered sequence:\n";
  for(int i=0; i<sequence.size();i++){
    std::cout<< sequence[i]<<std::endl;
  }

  std::cout<< "\nReversed sequence:\n";
  for(int i=sequence.size()-1; i>=0 ;i--){
    std::cout<< sequence[i]<<std::endl;
  }
}