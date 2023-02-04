// Testing Reading From Text Files Using A Loop (EXIT_FAILURE)

#include <iostream>
#include <fstream>
#include <cstdlib> // THIS HEADER IS NEEDED FOR "EXIT_FAILURE"

int main(){
    std::ifstream infile; 
    infile.open("inpUt.txt"); // Wrong file name here: U instead of u
 
    if(!infile.is_open()){ 
        std::cout << "Error in opening file." << std::endl;
        return EXIT_FAILURE;
    }
 
    int tmp;
 
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
 
    infile.close();
}

