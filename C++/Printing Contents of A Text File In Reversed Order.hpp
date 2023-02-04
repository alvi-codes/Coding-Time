// Printing Contents of A Text File In Reversed Order

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    
    std::ifstream infile;
    infile.open("input.txt");
    
    std::vector<int> v;
    
    if(!infile.is_open()){
        std::cout<<"The File Could Not Be Opened."<<std::endl;
        return EXIT_FAILURE;
    }
    else{
        int temp;
        while(infile>>temp){
            v.push_back(temp);
        }
    }
    
    infile.close();
    
    for(int i=v.size()-1; i>=0; i--){
            std::cout<<v[i]<<std::endl;
        }
}
