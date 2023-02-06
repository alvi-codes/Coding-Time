// Search A Contact

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

struct Contact{
  std::string name, surname, email, phone;
};

int search_contact(const std::vector<Contact>& contacts, std::string first_name, std::string surname){
  for (int i = 0; i < size(contacts); i++){
    if (contacts[i].name == first_name && contacts[i].surname == surname){
      return i;
    }
  }
  return -1;
}

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

  std::string firstname, surname;
  std::cout<<"Enter the firstname: "<<std::endl;
  std::cin>>firstname;
  std::cout<<"Enter the surname: "<<std::endl;
  std::cin>>surname;

  int index = search_contact(contact_details, firstname, surname);

  if ( index == -1){
    std::cout<<"\nContact could not be found in database.";
  }
  else{
    std::cout<<"\nContact found in database:"<<std::endl;
    std::cout<<contact_details[index].name<<" "<<contact_details[index].surname<<" "<<contact_details[index].email<<" "<<contact_details[index].phone<<std::endl;
  }

}