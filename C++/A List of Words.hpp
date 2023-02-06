// A List of Words

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
 
int main(){
    ListNode* l = NULL;

    std::ifstream infile;
    infile.open("list_words.txt");

    if (!infile.is_open()){
      std::cout<<"Error reading datas from the file.\n";
      return EXIT_FAILURE;
    }

    list_t data;
    while (infile>>data){
      l = cons_list(data, l);
    }
 
    print_list(l);
 
    deallocate_list(l);
}