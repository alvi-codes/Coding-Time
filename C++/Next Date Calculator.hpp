// Next Date Calculator

#include <iostream>



bool leap_year(int year){
  bool ly = false;

  if (year % 4 == 0){
    ly = true;
    if (year % 100 == 0){
      ly = false;
      if (year % 400 == 0){
        ly = true;
      } 
    }
  }

  return ly;
}



void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

  if (m1==1 || m1==3 or m1==5 || m1==7 || m1==8 or m1==10 || m1==12){

    if (d1==31){
      d2=1;
      if (m1==12){
        m2=1;
        y2=y1+1;
      }
      else{
        m2=m1+1;
        y2=y1;
      }
    }
    else{
      d2=d1+1;
      m2=m1;
      y2=y1;
    }

  }

  else if (m1==4 or m1==6 or m1==9 or m1==11){

    if (d1==30){
      d2=1;
      m2=m1+1;
      y2=y1;
    }
    else{
      d2=d1+1;
      m2=m1;
      y2=y1;
    }

  }

  else if (m1==2){

    if (leap_year(y1)){
      
      if (d1==29){
        d2=1;
        m2=m1+1;
        y2=y1;
      }
      else{
        d2=d1+1;
        m2=m1;
        y2=y1;
      }

    }
    else{

      if (d1==28){
        d2=1;
        m2=m1+1;
        y2=y1;
      }
      else{
        d2=d1+1;
        m2=m1;
        y2=y1;
      }

    }

  }

}



int main(){
  int d1, m1, y1, d2, m2, y2;

  std::cout<<"Enter the date in the format DD/MM/YY one after another: \n";

  std::cin>>d1>>m1>>y1;

  next_date(d1, m1, y1, d2, m2, y2);

  std::cout<<"\n \nThe next date is: "<<d2<<"/"<<m2<<"/"<<y2<<std::endl;
}