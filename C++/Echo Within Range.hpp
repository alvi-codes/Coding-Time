// Echo Within Range
#include <iostream>
 
int main(){
    int n;
 
    std::cin >> n;
 
    while((n<=10) && (n>=-10)){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}