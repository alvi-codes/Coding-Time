// Testing The Points 

#include <iostream>
#include <cmath>

struct Point{
  double x,y;
};

double distance_between_points(Point p1, Point p2){
  return std::sqrt(std::pow(p2.y-p1.y,2) + std::pow(p2.x-p1.x,2));
}

int main(){
  Point p1, p2;
  
  std::cout<< "Enter the coordinates of the first point:"<<std::endl;
  std::cin>>p1.x>>p1.y;

  std::cout<< "Enter the coordinates of the second point:"<<std::endl;
  std::cin>>p2.x>>p2.y;

  std::cout<<"The points are:"<<std::endl;
  std::cout<<"("<<p1.x<<","<<p1.y<<")"<<std::endl;
  std::cout<<"("<<p2.x<<","<<p2.y<<")"<<std::endl;

  std::cout<<"The distance in-between the points are: "<<distance_between_points(p1,p2)<<std::endl;
}