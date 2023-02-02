// Restructured Temperature Conversion
#include <iostream>
#include <string>

int main(){
  double temp_in, temp_out;
  std::string unit_in, unit_out;
  bool valid_unit=true;

  std::cin>>temp_in>>unit_in;
  
  if (unit_in=="C"){
    unit_out="F";
    temp_out= (temp_in * (9/5.0)) + 32;
  }
  else if (unit_in=="F"){
    unit_out="C";
    temp_out=(temp_in-32)*(5/9.0);
  }
  else{
    valid_unit=false;
  }

  if(valid_unit==true){
    std::cout<<temp_out<<unit_out;
  }
  else{
    std::cout<<"Invalid Data Input As Unit!";
  }
}
