// Triangles

#include <iostream>
#include <cmath>

struct Points{
  double x,y;
};

struct Triangle{
  Points A, B, C;
};

double distance_points(Points P1, Points P2){
  return std::sqrt( std::pow(P2.y-P1.y,2) + std::pow(P2.x-P1.x,2) );
}

double Triangle_Perimeter(Triangle T){
  double perimeter = 0;
  perimeter = distance_points(T.A , T.B);
  perimeter = perimeter + distance_points(T.B , T.C);
  perimeter += distance_points(T.C , T.A);
  return perimeter;
}

int main(){
  Triangle T;
  
  std::cout<<"Enter coordinates of point A:"<<std::endl;
  std::cin>> T.A.x >> T.A.y ;

  std::cout<<"Enter coordinates of point B:"<<std::endl;
  std::cin>> T.B.x >> T.B.y ;

  std::cout<<"Enter coordinates of point C:"<<std::endl;
  std::cin>> T.C.x >> T.C.y ;

  std::cout<< "Perimeter of Triangle= " << Triangle_Perimeter(T) <<std::endl;
}