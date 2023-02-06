// Replace Elements In A List

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
 
// Replacing the elements by 2 functions being called inside a third function
bool replace_all(list_t e, list_t n, ListNode* l){
  bool replaced = false;
  while (l != NULL){
    if (l->val == e){
      replaced = true;
      (*l).val = n;
    }
    l = l->next;
  }
  return replaced;
}

bool replace_first(list_t e, list_t n, ListNode* l){
  bool replaced = false;
  while (l != NULL){
    if (l->val == e){
      replaced = true;
      (*l).val = n;
      break;
    }
    l = l->next;
  }
  return replaced;
}

bool replace_list(list_t e, list_t n, ListNode* l, bool all){
  bool replacements_took_place;
  if (all == true){
    replacements_took_place = replace_all(e,n,l);
  }
  else{
    replacements_took_place = replace_first(e,n,l);
  }
  return replacements_took_place;
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

    std::cout<<"\nWhat data do you wish to replace:"<<std::endl;
    list_t old_data;
    std::cin>>old_data;

    std::cout<<"\nWhat data do you wish to replace '"<<old_data<<"' with:"<<std::endl;
    list_t new_data;
    std::cin>>new_data;

    std::cout<<"\nType 'all' if your wish to replace all occurances, otherwise type anything else:"<<std::endl;
    std::string typed_in;
    std::cin>>typed_in;

    bool all = false;
    if (typed_in == "all"){
      all=true;
    }
    
    if (replace_list(old_data, new_data, l, all)){
      std::cout<<"\nReplacements took place successfully!"<<std::endl;
      std::cout<<"Modified list:"<<std::endl;
      print_list(l);
    }
    else{
      std::cout<<"\nSorry, no replacements took place!:"<<std::endl;
    }
 
    deallocate_list(l);

}
