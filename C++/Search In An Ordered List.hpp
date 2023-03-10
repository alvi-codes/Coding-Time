// Search In An Ordered List

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

// Search Ordered List
bool search_ordered_list_rec(list_t e, ListNode* l){
  if (l == NULL || l->val > e){
    return false;
  }
  else{
    if (l->val == e){
      return true;
    }
    else{
      return search_ordered_list_rec(e, l->next);
    }
  }
}


 
int main(){
    ListNode* l = NULL;
 
    l = cons_list(9, l);
    l = cons_list(3, l);
    l = cons_list(6, l);    
    l = cons_list(2, l);
    l = cons_list(1, l);
 
    print_list_rec(l);

    std::cout<<"Length: "<<list_length(l)<<std::endl;

    std::cout<<"Enter the data to search for: ";
    list_t data;
    std::cin>>data;
    std::cout<<"Ordered search result: "<<search_ordered_list_rec(data, l);
 
    deallocate_list_rec(l);
}