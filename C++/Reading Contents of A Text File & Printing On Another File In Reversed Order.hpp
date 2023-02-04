// Reading Contents of A Text File & Printing On Another File In Reversed Order

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    
    std::ifstream infile;
    infile.open("input.txt");
    
    std::vector<int> v;
    
    if(!infile.is_open()){
        std::cout<<"The File INPUT.TXT Could Not Be Opened."<<std::endl;
        return EXIT_FAILURE;
    }
    else{
        int temp;
        while(infile>>temp){
            v.push_back(temp);
        }
    }
    
    infile.close();
    
    std::ofstream outfile;
    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout<<"The File OUTPUT.TXT Could Not Be Opened."<<std::endl;
        return EXIT_FAILURE;
    }
    else{
        for(int i=v.size()-1; i>=0; i--){
            outfile<<v[i]<<std::endl;
        }
    }

    outfile.close();

}