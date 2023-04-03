#include "tree.h"
#include <iostream>
using namespace std;

// TODO: Fill this in

template <typename Item> 
TreeNode<Item>::TreeNode(Item obj) {
    this->obj = obj;
    left = NULL;
    right = NULL;
}


template <typename Item> 
BinaryTree<Item>::BinaryTree() {
    root = NULL;
    N = 0;
}

template <typename Item> 
void BinaryTree<Item>::setRoot(TreeNode<Item>* root) {
    this->root = root;
}

template <typename Item> 
BinaryTree<int> BinaryTree<Item>::getExampleTree() {
    BinaryTree<int> tree;

    TreeNode<int>* nine = new TreeNode<int>(9);    
    TreeNode<int>* four = new TreeNode<int>(4);    
    TreeNode<int>* twenty = new TreeNode<int>(20);    
    TreeNode<int>* one = new TreeNode<int>(1);    
    TreeNode<int>* eight = new TreeNode<int>(8);    
    TreeNode<int>* fifteen = new TreeNode<int>(15);    
    TreeNode<int>* twentyfive = new TreeNode<int>(25);    
    nine->left = four;    
    nine->right = twenty;    
    
    four->left = one;    
    four->right = eight;    
    
    twenty->left = fifteen;    
    twenty->right = twentyfive;   

    tree.setRoot(nine);

    return tree;

}


/**
 * 
 * Looking for a particular object in the tree
 * @param obj Object to search for
 * 
 * @return true if obj is in the tree
 *         false otherwise
*/
template <typename Item> 
bool BinaryTree<Item>::contains(Item obj) {

    return false; // This is a dummy value
}


template class BinaryTree<int>;
template class TreeNode<int>;
template class BinaryTree<float>;
template class TreeNode<float>;