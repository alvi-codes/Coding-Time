// Search In An Ordered List

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
 
typedef std::string list_t; // using typedef we can change all the common variable types in just one line

struct ListNode{
    list_t val;
    ListNode* next;
};
 
// Adding a new node
ListNode* cons_list(list_t e, ListNode* l){
    ListNode* tmp;
 
    tmp = new ListNode;
 
    tmp->val = e;
    tmp->next = l;
 
    return tmp;
}
 
//Printing the list 
void print_list(ListNode* l){
    while(l != NULL){
        std::cout << l->val << std::endl;
        l = l->next;
    }
}

//Deallocating the list 
void deallocate_list(ListNode* l){
    ListNode* tmp;
 
    while(l != NULL){
        tmp = l->next;
        delete l;
        l = tmp;
    }
}
 
// Search in an ordered list
bool search_list(list_t e, ListNode* l){

  bool data_found = false;
  list_t current_data = (*l).val;

  while (l != NULL && current_data <= e){

    if (l->val == e){
      data_found = true;
      break;
    }
    
    l = l->next;

    if (l != NULL){
      current_data = (*l).val;
    }
  }

  return data_found;
}



int main(){
    ListNode* l = NULL;

    std::ifstream infile;
    infile.open("list_characters.txt");

    if (!infile.is_open()){
      std::cout<<"Error reading datas from the file.\n";
      return EXIT_FAILURE;
    }

    list_t data;
    while (infile>>data){
      l = cons_list(data, l); 
    }
 
    print_list(l);
 
    list_t data_to_find;
    std::cout<< "\nWhat data are you looking for?"<<std::endl;
    std::cin>> data_to_find;

    if (search_list(data_to_find,l)){
      std::cout<<"The data '"<< data_to_find <<"' is present in the list."<<std::endl;
    }
    else{
      std::cout<<"The data '"<< data_to_find <<"' does not exist in the list."<<std::endl;
    }

    deallocate_list(l);

}