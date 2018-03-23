
#include "dataTypes.hpp"


/*
t2 is subtree of t1 if the structure and value is the same 
*/
template<typename T>
bool isidentical(TreeNode<T> *t1, TreeNode<T>* t2){
    if(!t1 && !t2)
        return true;
    if(!t1 || !t2)
        return false;
    return (t1->val==t2->val) && isidentical(t1->left, t2->left) && isidentical(t1->right, t2->right);

}
template<typename T>
bool isSubTree(TreeNode<T>* t1, TreeNode<T>* t2){
    if(!t1 && !t2)
        return true;
    if(!t1 || !t2)
        return false;
return isidentical(t1->left, t2) || isidentical(t1->right, t2);

}



