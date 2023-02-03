// Leap Year 

#include <iostream>

bool leap_year(int year){
  bool leap_year_boolean = false;

  if (year % 4 == 0){
    leap_year_boolean = true;
    if (year % 100 == 0){
      leap_year_boolean = false;
      if (year % 400 == 0){
        leap_year_boolean = true;
      } 
    }
  }

  return leap_year_boolean;
}



int main(){
  std::cout<<"Enter the year:- ";
  int year;
  std::cin>>year;
  
  if (leap_year(year)){
    std::cout<<year<<" is a leap year!"<<std::endl;
  }
  else{
    std::cout<<year<<" is not a leap year!"<<std::endl;
  }
  
}