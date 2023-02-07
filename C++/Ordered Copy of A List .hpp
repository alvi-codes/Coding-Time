// Ordered Copy of A List 

#include <iostream>
 
typedef int list_t;
 
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
 
// Printing 
void print_list_rec(ListNode* l){
    if(l != NULL){
        std::cout << l->val << std::endl;
        print_list_rec(l->next);
    }
}

// Deallocating 
void deallocate_list_rec(ListNode* l){
    ListNode* tmp;
    if(l != NULL){
        tmp = l->next;
        delete l;
        deallocate_list_rec(tmp);
    }
}

// Ordered Insertion
ListNode* ordered_insertion_list(list_t e, ListNode* l){
    if(l == NULL){
        return cons_list(e, l);
    }
    else if(e < l->val){
        return cons_list(e, l);
    }
    else{
        l->next = ordered_insertion_list(e, l->next);
        return l;
    }
}

// Ordering A List
ListNode* ordered_copy(ListNode* l){
  ListNode* tmp; // used to delete the nodes of the initial list
  ListNode* new_l;
  new_l = NULL;

  while(l != NULL){
    new_l = ordered_insertion_list(l->val, new_l);
    tmp = l;
    l = l->next;
    delete tmp;
  }

  return new_l;
}
 


int main(){
    ListNode* l = NULL;
 
    l = cons_list(5, l);
    l = cons_list(3, l);
    l = cons_list(1, l);
    l = cons_list(2, l);
    l = cons_list(4, l);
 
    std::cout<<"\nInitial list:"<<std::endl;
    print_list_rec(l);

    std::cout<<"\nOrdered list:"<<std::endl;
    l = ordered_copy(l);
    print_list_rec(l);

    deallocate_list_rec(l);
}