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

        void inorder();

};

template <typename Item> 
class BinaryTree {
    private:
        TreeNode<Item>* root;
        int N; // Size (number of nodes)
    public:
        BinaryTree();
        void setRoot(TreeNode<Item>* root);

        /**
         * 
         * Looking for a particular object in the tree
         * @param obj Object to search for
         * 
         * @return true if obj is in the tree
         *         false otherwise
        */
        bool contains(Item obj);

        /**
         * Add an object to the tree if it doesn't
         * exist already.  Make sure we maintain the
         * "tree ordering invariant"
         * 
         * @param obj: Object I want to add
        */
        void add(Item obj);

        void inorder();

        static BinaryTree<int> getExampleTree();
};

#endif