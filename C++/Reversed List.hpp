// Reversed List

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
 
typedef std::string list_t;

struct ListNode{
    list_t val;
    ListNode* next;
};
 
ListNode* cons_list(list_t e, ListNode* l){
    ListNode* tmp;
 
    tmp = new ListNode;
 
    tmp->val = e;
    tmp->next = l;
 
    return tmp;
}

void print_list(ListNode* l){
    while(l != NULL){
        std::cout << l->val << std::endl;
        l = l->next;
    }
}

void deallocate_list(ListNode* l){
    ListNode* tmp;
 
    while(l != NULL){
        tmp = l->next;
        delete l;
        l = tmp;
    }
}

ListNode* reversed_copy_list(ListNode* l){
  
  ListNode* tmp;
  tmp = NULL; // if we dont do this, then a 0 prints out as the first data in the new reversed list
 
    while(l != NULL){
        tmp = cons_list(l->val, tmp);
        l = l->next;
    }
 
  return tmp;
 
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
    std::cout<<"\nInitial list:"<<std::endl;
    print_list(l);

    std::cout<<"\nReversed list:"<<std::endl;
    ListNode* r = NULL;
    r = reversed_copy_list(l);
    print_list(r);
 
    deallocate_list(l);
    deallocate_list(r);

}