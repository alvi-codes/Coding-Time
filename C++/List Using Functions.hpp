// List Using Functions

#include <iostream>
 
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
 


int main(){
    ListNode* l = NULL;
 
    l = cons_list(2, l);
    l = cons_list(3, l);
    l = cons_list(4, l);
 
    print_list(l);
 
    deallocate_list(l);
}