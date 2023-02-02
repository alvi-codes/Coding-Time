// Rectangles
#include <iostream>
int main(){
   double side1,side2;
    
   std::cout<<"Enter the length of one side of the rectangle:"<<std::endl;
   std::cin>>side1;
   std::cout<<"Enter the length of the other side of the rectangle:"<<std::endl;
   std::cin>>side2;
    
   std::cout<<"The area of the rectangle is "<<(side1*side2)<< " unit squares."<<std::endl;
    
    std::cout<<"The perimeter of the rectangle is "<<2*(side1+side2)<< " units."<<std::endl;

}