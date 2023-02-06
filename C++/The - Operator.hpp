// The -> Operator

// (*tmp).val = 2;   can also be written as   tmp->val = 2;

#include <iostream>

struct IntListNode{
  int val;
  IntListNode* next;
};

int main(){
  IntListNode* l;
  l=NULL;

  IntListNode* tmp;
  
  tmp = new IntListNode;
  tmp->val = 2;
  (*tmp).next = l;

  l = tmp;

  tmp = new IntListNode;
  (*tmp).val = 3;
  (*tmp).next = l;

  l = tmp;

  IntListNode* lit;
  lit = l;

  while (lit != NULL){
    std::cout << (*lit).val << std::endl;
    lit = (*lit).next;
  }

  std::cout<<"\nNew List:"<<std::endl;

  tmp = new IntListNode;
  (*tmp).val = 4;
  (*tmp).next = l;
  l = tmp;

  lit = l;
  while (lit != NULL){
    std::cout << (*lit).val << std::endl;
    lit = (*lit).next;
  }

  lit = l;

  while(lit != NULL){
    tmp = lit->next;
    delete lit;
    lit = tmp;
  }
  
}