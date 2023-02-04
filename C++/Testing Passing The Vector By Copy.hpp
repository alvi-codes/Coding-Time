// Testing Passing The Vector By Copy

#include <iostream>
#include <vector>
 
double sum_vector(std::vector<double> vin){
    double sum = 0;
 
    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
 
    return sum;
}
 
int main(){
    std::vector<double> v;
 
    v.push_back(5);
    v.push_back(15);
    v.push_back(30);
 
    std::cout << "Sum:" << sum_vector(v) << std::endl;
}