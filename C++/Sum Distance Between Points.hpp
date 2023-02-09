// Sum Distance Between Points

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
 
class Point{
 
public:
    Point(double ix, double iy) : x(ix), y(iy) {
    }
 
    std::string to_s(Point p) const{
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
 
    double distance(Point p) const{
        return std::sqrt( std::pow((x-p.x),2)+std::pow((y-p.y),2) );
    }
   
private:
    double x;
    double y;
 
};
 
double sum_distances_points(const std::vector<Point>& pv){
  
  double sum=0;
  if (pv.size()>1){
    for(int i=0; i<(pv.size()-1); i++){
      sum = sum + pv[i].distance(pv[i+1]);
    }
    return sum;
  }
  else{
    return 0;
  }
  
}



int main(){
  
    std::ifstream infile;
  
    infile.open("points.txt");
 
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
 
    std::vector<Point> points;
 
    double inx, iny;
 
    while(infile >> inx >> iny){
      Point p(inx, iny);
      points.push_back(p);
    } 
 
    infile.close();
  
    std::cout << sum_distances_points(points) << std::endl;
  
}