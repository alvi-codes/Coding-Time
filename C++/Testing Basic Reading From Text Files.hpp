// Testing Basic Reading From Text Files

#include <iostream>
#include <fstream>
 
int main(){
    std::ifstream infile; 
    
    infile.open("input.txt");
 
    if(infile.is_open()){ 
        int tmp;
 
        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;
        
        infile.close();      
    }
    else{
        std::cout << "Error in opening file." << std::endl;
    } 
}