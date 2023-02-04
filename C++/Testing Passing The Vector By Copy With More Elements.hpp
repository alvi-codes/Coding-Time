// Testing Passing The Vector By Copy With More Elements

#include <iostream>
#include <vector>
 
double sum_vector(std::vector<double> v_input){
    double sum = 0;
 
    for(int i = 0; i < v_input.size(); i++){
        sum = sum + v_input[i];
    }
 
    return sum;
}
 
int main(){
    std::vector<double> v;
    int elements, temp;
 
    std::cout<<"Number of elements you wish to enter:"<<std::endl;
    std::cin>>elements;

    std::cout<<"\nEnter your elements:"<<std::endl;
    for(int i=0; i<elements; i++){
      std::cin>>temp;
      v.push_back(temp);
    }

    std::cout << "Sum: " << sum_vector(v) << std::endl;
}
