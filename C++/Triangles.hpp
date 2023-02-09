// Triangles

#include <iostream>
#include <cmath>

struct Points{
  double x,y;

  double distance(Points p) const{
    return std::sqrt(  std::pow((x - p.x), 2) + std::pow((y - p.y), 2)  );
  }
};

struct Triangle{
  Points A, B, C;

  double Triangle_Perimeter() const{
    double perimeter = 0;
    perimeter = A.distance(B);
    perimeter = perimeter + B.distance(C);
    perimeter += C.distance(A);
    return perimeter;
  }
};



int main(){
  Triangle T;
  
  std::cout<<"Enter coordinates of point A:"<<std::endl;
  std::cin>> T.A.x >> T.A.y ;

  std::cout<<"Enter coordinates of point B:"<<std::endl;
  std::cin>> T.B.x >> T.B.y ;

  std::cout<<"Enter coordinates of point C:"<<std::endl;
  std::cin>> T.C.x >> T.C.y ;

  std::cout<< "\nPerimeter of Triangle= " << T.Triangle_Perimeter() <<std::endl;
}