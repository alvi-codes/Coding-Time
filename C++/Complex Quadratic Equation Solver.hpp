// Complex Quadratic Equation Solver

#include <iostream>
#include <cmath>

struct Complex{
    double real_part, imaginary_part;
};

 void equation_solver(double A, double B, double C, Complex& X_1, Complex& X_2){
  double discriminant = B*B - 4*A*C;

  if (discriminant<0){
   
    X_1.real_part = (-B) / (2*A);
    X_2.real_part = (-B) / (2*A);

    X_1.imaginary_part = std::sqrt(-discriminant) / (2*A);
    X_2.imaginary_part = std::sqrt(-discriminant) / (2*A);
  }
  else{
    
    X_1.real_part = (- B + std::sqrt(discriminant)) / (2*A);
    X_2.real_part = (- B - std::sqrt(discriminant)) / (2*A);

    X_1.imaginary_part = 0;
    X_2.imaginary_part = 0;
  }
}



int main(){

  std::cout<<"Solutions Finder For Equation In The Form: \n";
  std::cout<<"\nA.X^2 + B.X + C = 0 \n";
  std::cout<<"\nEnter your values for A, B and C respectively: \n";
  
  double A, B, C;
  std::cin>>A>>B>>C;

  Complex X_1, X_2;
  
  equation_solver( A, B, C, X_1, X_2);

  std::cout<< "\nSolutions:"<<std::endl;
  std::cout<< "X_1 = " << X_1.real_part << " + " << X_1.imaginary_part << "i" << std::endl;
  std::cout<< "X_2 = " << X_2.real_part << " - " << X_2.imaginary_part << "i" << std::endl;

}