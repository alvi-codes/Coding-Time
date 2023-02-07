// Search In List

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

// Getting length
int list_length(ListNode* l){
  int len;
  if (l == NULL){
    len = 0; 
  }
  else{
    len = 1 + list_length(l->next);
  }
  return len;
}

// Searching
bool search_list(list_t e, ListNode* l){
  if(l == NULL){
    return false;
  }
  else if(e == l->val){
    return true;
  }
  else{
    return search_list(e, l->next);
  }
}
 
int main(){
    ListNode* l = NULL;
 
    l = cons_list(1, l);
    l = cons_list(2, l);
    l = cons_list(3, l);
    l = cons_list(4, l);
    l = cons_list(5, l);
 
    print_list_rec(l);

    std::cout<<"Length: "<<list_length(l)<<std::endl;

    std::cout<<"Enter the data to search for: ";
    list_t data;
    std::cin>>data;
    std::cout<<"Search result: "<<search_list(data, l);
 
    deallocate_list_rec(l);
}