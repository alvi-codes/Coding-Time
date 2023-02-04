// Exercise: Minimum Value In A Vector

#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& v_in){
  int min_index, min_value=9999;

  if (v_in.size()>0){
    for(int i=0; i<v_in.size(); i++){
      if(v_in[i]<min_value){
        min_value=v_in[i];  
        min_index=i;
      }
    }
  }
  else{
    min_index= -1;
  }
  
  return min_index;
}

int main(){
  std::vector<double> v_in;

  v_in.push_back(5);
  v_in.push_back(21);
  v_in.push_back(-16);
  v_in.push_back(15);
  v_in.push_back(3);

  std::cout<< min_vector_element(v_in);
}
