// Testing Passing The Vector By Constant Reference

#include <iostream>
#include <vector>
 
double sum_vector(const std::vector<double>& vin){
    double sum = 0;
 
    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
 
    return sum;
}
 
int main(){
    std::vector<double> v;
 
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
 
    std::cout << "Sum: " << sum_vector(v) << std::endl;
}
