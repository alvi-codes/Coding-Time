// Trying To Change A Vector Passed By Constant Reference (Crashes)

#include <iostream>
#include <vector>
 
double sum_vector(const std::vector<double>& vin){
    double sum = 0;
 
    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    vin.size();

    vin.push_back(5); //THIS CRASHES THE CODE AS IT ATTEMPTS TO MODIFY THE VECTOR
 
    return sum;
}
 
int main(){
    std::vector<double> v;
 
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
 
    std::cout << "Sum: " << sum_vector(v) << std::endl;
}