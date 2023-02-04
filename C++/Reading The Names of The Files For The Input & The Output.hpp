// Reading The Names of The Files For The Input & The Output

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int main(){

    std::string input_path, output_path;
    std::cout<<"Enter the path of the input file: ";
    std::cin>>input_path;
    std::cout<<"\nEnter the path of the output file: ";
    std::cin>>output_path;

    std::ifstream infile;
    infile.open(input_path);
    
    std::vector<int> v;
    //a = check_failure();


    if(!infile.is_open()){
        std::cout<<"The File For Input Could Not Be Opened."<<std::endl;
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
    outfile.open(output_path);

    if(!outfile.is_open()){
        std::cout<<"The File For Output Could Not Be Opened."<<std::endl;
        return EXIT_FAILURE;
    }
    else{
        for(int i=v.size()-1; i>=0; i--){
            outfile<<v[i]<<std::endl;
        }
    }

    outfile.close();

}