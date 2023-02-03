// Testing The Quadratic Equation Solver

#include <iostream>
#include <cmath>

bool equation_solver(double A, double B, double C, double& X_1, double& X_2){

  bool real;
  double discriminant = B*B - 4*A*C;

  if (discriminant < 0) {
    real = false;
  }
  else{
    real = true;
    X_1 = (- B + std::sqrt(discriminant)) / (2*A);
    X_2 = (- B - std::sqrt(discriminant)) / (2*A);
  }

  return real;
}



int main(){

  std::cout<<"Real Solutions Finder For Equation In The Form: \n";
  std::cout<<"\nA.X^2 + B.X + C = 0 \n";
  std::cout<<"\nEnter your values for A, B and C respectively: \n";
  
  double A, B, C, X_1, X_2;
  std::cin>>A>>B>>C;
  
  if (equation_solver( A, B, C, X_1, X_2)){
    std::cout<< "X_1 = " << X_1 << "\nX_2 = " << X_2;
  }
  else{
    std::cout<< "No Real Solutions !";
  }

}