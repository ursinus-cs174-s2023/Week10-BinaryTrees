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



template class BinaryTree<int>;
template class TreeNode<int>;
template class BinaryTree<float>;
template class TreeNode<float>;