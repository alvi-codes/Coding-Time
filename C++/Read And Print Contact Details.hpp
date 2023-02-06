// Read And Print Contact Details

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

struct Contact{
  std::string name, surname, email, phone;
};

int main(){

  std::ifstream infile;

  infile.open("contact details.txt");

  if (!infile.is_open()){
    std::cout<<"Error Opening File"<<std::endl;
    return EXIT_FAILURE;
  }

  std::vector<Contact> contact_details;
  Contact temp;

  while (infile >> temp.name >> temp.surname >> temp.email >> temp.phone){
    contact_details.push_back(temp);
  }

  std::cout<<"Printing the vector: \n"<<std::endl;
  for (int i = 0; i < size(contact_details); i++){
    std::cout<<contact_details[i].name<<" "<<contact_details[i].surname<<" "<<contact_details[i].email<<" "<<contact_details[i].phone<<std::endl;
  }

}