// Methods & Attributes 

#include <iostream>
#include <cmath>
#include <string>
 
struct Point{
    double x;  // These are called ATTRIBUTES
    double y;  // These are called ATTRIBUTES
 
    std::string to_s(){
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";  // These are called METHODS
    }
 
    double distance(Point p){
        return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));  // These are called METHODS
    }
}; 



int main(){
    Point pa, pb;
 
    std::cout << "enter coordinates for the first point" << std::endl;
    std::cin >> pa.x >> pa.y;
 
    std::cout << "enter coordinates for the second point" << std::endl;
    std::cin >> pb.x >> pb.y;
 
    std::cout << "you entered the following points:" << std::endl;
    std::cout << pa.to_s() << std::endl;
    std::cout << pb.to_s() << std::endl;
 
    std::cout << "their distance is: " << pa.distance(pb) << std::endl;
}