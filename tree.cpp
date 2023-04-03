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
    bool ret = false;
    TreeNode<Item>* node = root;
    while(node != NULL && obj != node->obj) {
        if(obj > node->obj) {
            node = node->right;
        } else if(obj < node->obj) {
            node = node->left;
        }
    }
    if(node != NULL) {
        ret = true;
    }
    return ret; //dummy value
}


/**
 * Add an object to the tree if it doesn't
 * exist already.  Make sure we maintain the
 * "tree ordering invariant"
 * 
 * @param obj: Object I want to add
*/
template <typename Item> 
void BinaryTree<Item>::add(Item obj) {
    if (root == NULL) {
        // Special case: empty tree, this new
        // object gets wrapped in a node that becomes
        // the root
        root = new TreeNode<Item>(obj);
        N = 1;
    }
    else {
        TreeNode<Item>* cursor = root;
        while (cursor->obj != obj) {
            if (obj < cursor->obj) {
                if (cursor->left == NULL) {
                    cursor->left = new TreeNode<Item>(obj);
                }
                cursor = cursor->left;
            }
            else if (obj > cursor->obj) {
                if (cursor->right == NULL) {
                    cursor->right = new TreeNode<Item>(obj);
                }
                cursor = cursor->right;
            }
        }
    }
    
}

template <typename Item> 
void TreeNode<Item>::inorder() {
    if (left != NULL) {
        left->inorder();
    }
    cout << obj << " ";
    if (right != NULL) {
        right->inorder();
    }
}

template <typename Item> 
void BinaryTree<Item>::inorder() {
    if (root != NULL) {
        root->inorder();
    }
}

template class BinaryTree<int>;
template class TreeNode<int>;
template class BinaryTree<float>;
template class TreeNode<float>;