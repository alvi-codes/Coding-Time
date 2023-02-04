// Exercise: Appending Vectors

#include <iostream>
#include <vector>

void append_vectors(const std::vector<double>& v_in_1, const std::vector<double>& v_in_2, std::vector<double>& v_out){

  for(int i=0; i<v_in_1.size(); i++){
    v_out.push_back(v_in_1[i]);
  }

  for(int i=0; i<v_in_2.size(); i++){
    v_out.push_back(v_in_2[i]);
  }  

}



int main(){
  std::vector<double> v_in_1, v_in_2, v_out;

  v_in_1.push_back(5);
  v_in_1.push_back(21);
  v_in_1.push_back(-16);
  v_in_1.push_back(15);
  v_in_1.push_back(3);

  v_in_2.push_back(9);
  v_in_2.push_back(-2);
  v_in_2.push_back(13);
  v_in_2.push_back(-21);
  v_in_2.push_back(7);

  append_vectors(v_in_1, v_in_2, v_out);

  for(int i=0; i<v_out.size(); i++){
    std::cout<< v_out[i] <<std::endl;
  }

}