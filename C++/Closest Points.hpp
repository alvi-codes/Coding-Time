// Closest Points

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream> 
#include <cstdlib> // THIS HEADER IS NEEDED FOR "EXIT_FAILURE"

struct Point{
  double x;
  double y;
};

double distance_between_points(Point p1, Point p2){
  return std::sqrt( std::pow(p2.y-p1.y,2) + std::pow(p2.x-p1.x,2) );
}

std::string point_to_string(Point p){
  return "( " + std::to_string(p.x) + " , " + std::to_string(p.y) + " )";
}

void closest_points(const std::vector<Point>& vp, Point& idxp1, Point& idxp2){

  double temp_distance, shortest_distance = 99999;

  for (int i = 0; i < size(vp); i++){
    for (int j = 0; j < size(vp); j++){
      temp_distance = distance_between_points(vp[i], vp[j]);
      if (temp_distance != 0){
        if (temp_distance < shortest_distance){
          shortest_distance = temp_distance;
          idxp1 = vp[i];
          idxp2 = vp[j];
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
    Point idxp1, idxp2;
    closest_points(Vector_of_Points, idxp1, idxp2);
    std::cout<< "\nThe closest points are:" <<std::endl;
    std::cout<< point_to_string(idxp1) <<std::endl;
    std::cout<< point_to_string(idxp2) <<std::endl;
  }

}