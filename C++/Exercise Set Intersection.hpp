// Exercise: Set Intersection

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



void union_vector(const std::vector<double>& v_in_1, const std::vector<double>& v_in_2, std::vector<double>& v_out){

  for(int i=0; i<v_in_1.size(); i++){
    if (search_vector(v_in_1[i], v_in_2) != -1){
      v_out.push_back(v_in_1[i]);
    }
  }
}



int main(){
  std::vector<double> v_in_1, v_in_2, v_out;

  v_in_1.push_back(1);
  v_in_1.push_back(8);
  v_in_1.push_back(13);
  v_in_1.push_back(4);
  v_in_1.push_back(3);

  v_in_2.push_back(1);
  v_in_2.push_back(-2);
  v_in_2.push_back(13);
  v_in_2.push_back(4);
  v_in_2.push_back(7);

  union_vector(v_in_1, v_in_2, v_out);

  for(int i=0; i<v_out.size(); i++){
    std::cout<< v_out[i] <<std::endl;
  }

}