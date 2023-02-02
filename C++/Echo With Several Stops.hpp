// Echo With Several Stops
#include <iostream>
#include <string>

int main(){
    std::string input_text;
 
    std::cin >> input_text;
 
    while((input_text != "STOP") && (input_text != "Stop") && (input_text != "stop")){
        std::cout << input_text << std::endl;
        std::cin >> input_text;
    }
}
