// Length of A List

#include <iostream>
#include <fstream>
#include <cstdlib>
 
typedef int list_t; // using typedef we can change all the common variable types in just one line

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
 
//Getting the length
int length_list(ListNode* l){
  int len = 0;
   while(l != NULL){
        len += 1;
        l = l->next;
    }
  return len;
}



int main(){
    ListNode* l = NULL;

    std::ifstream infile;
    infile.open("list_datas.txt");

    if (!infile.is_open()){
      std::cout<<"Error reading datas from the file.\n";
      return EXIT_FAILURE;
    }

    list_t data;
    while (infile>>data){
      l = cons_list(data, l); 
    }
 
    print_list(l);
 
    std::cout<< "\nLength of the list: "<< length_list(l) <<std::endl;

    deallocate_list(l);

}