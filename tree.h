#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>

template <typename Item> 
class TreeNode {
    public:
        Item obj;
        TreeNode<Item>* left;
        TreeNode<Item>* right;

        TreeNode(Item obj);

};

template <typename Item> 
class BinaryTree {
    private:
        TreeNode<Item>* root;
        int N; // Size (number of nodes)
    public:
        BinaryTree();
        void setRoot(TreeNode<Item>* root);

        static BinaryTree<int> getExampleTree();
};

#endif