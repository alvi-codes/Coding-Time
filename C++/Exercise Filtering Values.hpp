// Exercise: Filtering Values

#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& v_in, double t, std::vector<double>& v_out){

  for (int i = 0; i < v_in.size(); i++){
    if (v_in[i]<t){
      v_out.push_back(v_in[i]);
    }
  }

}



int main(){
  std::vector<double> v_in, v_out; 
  double t, temp; // local variables




  std::cout<<"Enter 5 values into the vector:"<<std::endl;
  for(int i=0; i<5; i++){
    std::cin>>temp;
    v_in.push_back(temp);
  }

  std::cout<<"\nEnter the value of t:"<<std::endl;
  std::cin>>t;

  filter_v(v_in, t, v_out);

  std::cout<<"\nThe values in the new vector are:"<<std::endl;
  for(int i=0; i<v_out.size(); i++){
    std::cout<<v_out[i]<<std::endl;
  }
}
