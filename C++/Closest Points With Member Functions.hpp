// Closest Points With Member Functions

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib> // For EXIT_FAILURE
 
struct Point{
    double x;
    double y;
 
    std::string to_s() const{
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
 
    double distance(Point p) const{
        return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));
    }
}; 

void closest_points(const std::vector<Point>& vp, int& idxp1, int& idxp2){

  double temp_distance, shortest_distance = 99999;

  for (int i = 0; i < size(vp); i++){
    for (int j = 0; j < size(vp); j++){
      temp_distance = vp[i].distance(vp[j]);
      if (temp_distance != 0){
        if (temp_distance < shortest_distance){
          shortest_distance = temp_distance;
          idxp1 = i;
          idxp2 = j;
        }
      }
    }
  }
  
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

  if (Vector_of_Points.size()==0){
    std::cout<<"There are no points in the file."<<std::endl;
  }
  else if (Vector_of_Points.size()==1){
      std::cout<<"There is only one point in the file."<<std::endl;
  }
  else{
    int idxp1, idxp2;
    closest_points(Vector_of_Points, idxp1, idxp2);
    std::cout<< "\nThe closest points are:" <<std::endl;
    std::cout<< Vector_of_Points[idxp1].to_s() <<std::endl;
    std::cout<< Vector_of_Points[idxp2].to_s() <<std::endl;
    std::cout<< "\nTheir distance:" <<std::endl;
    std::cout<< Vector_of_Points[idxp1].distance(Vector_of_Points[idxp2]) <<std::endl;
  }
}