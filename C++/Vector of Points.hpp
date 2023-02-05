// Vector of Points

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream> 
#include <cstdlib> // THIS HEADER IS NEEDED FOR "EXIT_FAILURE"

struct Point{
  double x,y;
};

double distance_between_points(Point p1, Point p2){
  return std::sqrt(std::pow(p2.y-p1.y,2) + std::pow(p2.x-p1.x,2));
}

std::string point_to_string(Point p){
  return "(" + std::to_string(p.x) + "," + std::to_string(p.y) + ")";
}

int main(){
  std::ifstream infile;
  infile.open("points.txt");

  if (!infile.is_open()){
    std::cout<<"The file could not be opened.";
    return EXIT_FAILURE;
  }

  std::vector<Point> Vector_of_Points;
  Point temp;

  while (infile >> temp.x >> temp.y){ // COPYING FROM THE FILE TO VECTOR
    Vector_of_Points.push_back(temp);
  }

  infile.close();

  std::cout<< "The coordinates of the points in the file are:"<<std::endl;
  for (int i = 0; i < size(Vector_of_Points); i++){
    std::cout<<point_to_string(Vector_of_Points[i])<<std::endl;
  }
}