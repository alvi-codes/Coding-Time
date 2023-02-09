// Counting Nodes of Tree

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

// Counting Nodes
int count_nodes(TreeNode* t){
  if (t != NULL){
    return 1 + count_nodes(t-> left) + count_nodes(t-> right);
  }
  else{
    return 0;
  }
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
    
    print_tree(t);

    std::cout<<"\nNumber of NODES in the tree: "<< count_nodes(t) <<std::endl;
 
    deallocate_tree(t);
}