//Filtering Values

#include <iostream>
#include <vector>

int main(){
  std::vector<int> v;
  int n,t,temp;

  std::cout<<"Enter the value of n:"<<std::endl;
  std::cin>>n;

  for(int i=0; i<n; i++){
    std::cout<<"For index: "<<i<<std::endl;
    std::cin>>temp;
    v.push_back(temp);
  }
  
  std::cout<<"Enter the value of t:"<<std::endl;
  std::cin>>t;
  
  std::cout<<"Values less than t:"<<std::endl;
  for(int i=0; i<n; i++){
    if (v[i]<t){
      std::cout<< v[i] <<std::endl;
    }
  }
}