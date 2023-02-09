// Finding The Minimum Element

#include <iostream>
 
typedef int tree_t;
 
struct TreeNode{
    tree_t val;
    TreeNode* left;
    TreeNode* right;
};
 
TreeNode* cons_tree(tree_t e, TreeNode* l, TreeNode* r){
    TreeNode* tmp;
    tmp = new TreeNode;
    tmp->val = e;
    tmp->left = l;
    tmp->right = r;
    return tmp;
}
 
TreeNode* ordered_insertion_tree(tree_t e, TreeNode* t){
    if(t == NULL){
        return cons_tree(e, NULL, NULL);
    }
    else if(e < t->val){
        t->left = ordered_insertion_tree(e, t->left);
        return t;
    }
    else{
        t->right = ordered_insertion_tree(e, t->right);
        return t;
    }
}
 
void print_tree(TreeNode* t){
    if(t != NULL){
        print_tree(t->left);
        std::cout << t->val << std::endl;
        print_tree(t->right);
    }
}
 
void deallocate_tree(TreeNode* t){
    if(t != NULL){
        deallocate_tree(t->left);
        deallocate_tree(t->right);
        delete t;
    }
}

// Minimum Element
TreeNode* min_element(TreeNode* t){
  TreeNode* min_node;
  if(t == NULL){
    return NULL;
  }
  else while (t != NULL){
    min_node = t;
    t = t->left;
  }
  return min_node;
}

 

int main(){
    TreeNode* t;
    t = NULL;

    t = ordered_insertion_tree(89, t);
    t = ordered_insertion_tree(1, t);
    t = ordered_insertion_tree(-7, t);
    t = ordered_insertion_tree(-18, t);
    t = ordered_insertion_tree(-89, t);
    t = ordered_insertion_tree(-9, t);
    t = ordered_insertion_tree(15, t);
    t = ordered_insertion_tree(-18, t);
    t = ordered_insertion_tree(-359, t);
    t = ordered_insertion_tree(0, t);
 
 
    print_tree(t);

    if(min_element(t) == NULL){
      std::cout<<"The tree is empty!";
    }
    else{
      std::cout<<"\nMinimum element in the tree : "<< (*min_element(t)).val;
    }
 
    deallocate_tree(t);
}