#include<iostream>
#include<string.h>

int check_repeat(std::string input, int size){
    char curr_letter;
    int repeat_count;
    
    for (int i=0; i<size; i++){
        curr_letter = input[i];
        repeat_count = 0;
        
        for (int j=0; j<size; j++){
            if(curr_letter == input[j]){
                repeat_count++;
                if (repeat_count > 2){
                    return 0;
                }
            }
        }
        
        if (repeat_count < 2){
            return 0;
        }
    }
    
    return 1;
}



int main() 
{

	std::string input;
	std::cout<<"Enter the string:"<<std::endl;
	std::cin>>input;
	
	int size = input.length();
	
	if (size%2 != 0){
	    std::cout<<input<<" is a incorrect input"<<std::endl;
	}
	else{
	    if (check_repeat(input, size)){
	        std::cout<<input<<" is a valid string"<<std::endl;
	    }
	    else{
	        std::cout<<input<<" is not a valid string"<<std::endl;
	    }
	}
	
}
