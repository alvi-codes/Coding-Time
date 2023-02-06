// Loop

#include <iostream>

struct IntListNode{
  int val;
  IntListNode* next;
};

int main(){

  IntListNode* l;
  l=NULL;

  // Taking multiple list inputs from the user via loop
  std::cout<< "How many integers do you wish to insert in the list?"<<std::endl;
  int n, value;
  std::cin>>n;

  IntListNode* tmp;
  
  for(int i=0; i<n; i++){
    std::cout<< "Enter an integer: ";
    std::cin>>value;
    tmp = new IntListNode;
    (*tmp).val = value;
    (*tmp).next = l;
    l = tmp;
  }
  
//Printing The Datas In The List

  IntListNode* lit;
  lit = l;
  std::cout<< "\nPrinting the list:"<<std::endl;
  while (lit != NULL){
    std::cout << (*lit).val << std::endl;
    lit = (*lit).next;
  }

//Deallocating The List

  lit = l;

  while(lit != NULL){
    tmp = (*lit).next;
    delete lit;
    lit = tmp;
  }
  
}