// Leap Year

#include <iostream>

int main(){

  std::cout<<"Enter the year:- ";
  int year;
  std::cin>>year;
  bool leap_year = false;

  if (year % 4 == 0){
    leap_year = true;
    if (year % 100 == 0){
      leap_year = false;
      if (year % 400 == 0){
        leap_year = true;
      } 
    }
  }

  if (leap_year == true){
    std::cout<<year<<" is a leap year!"<<std::endl;
  }
  else{
    std::cout<<year<<" is not a leap year!"<<std::endl;
  }

}