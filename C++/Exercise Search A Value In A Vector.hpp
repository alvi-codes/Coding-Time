// Exercise: Search A Value In A Vector

#include <iostream>
#include <vector>

int search_vector(int value, const std::vector<double>& v_in){

  for(int i=0; i<v_in.size(); i++){
    if (v_in[i]==value){
      return i;
    }
  }

  return -1;
}



int main(){
  double value;
  std::vector<double> v_in;

  v_in.push_back(5);
  v_in.push_back(10);
  v_in.push_back(15);
  v_in.push_back(20);
  v_in.push_back(25);

  std::cout<<"Enter the value to search for: \n";
  std::cin>>value;

  std::cout<< search_vector(value, v_in);
}

