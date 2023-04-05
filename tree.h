#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include "simplecanvas/simplecanvas.h"

template <typename Item> 
class TreeNode {
    public:
        Item obj;
        TreeNode<Item>* left;
        TreeNode<Item>* right;

        TreeNode(Item obj);

        void inorder();


        /**
         * 
         * Looking for a particular object in the tree
         * @param obj Object to search for
         * 
         * @return true if obj is in the subtree rooted at this node
         *         false otherwise
        */
        bool containsRec(Item obj);

        /**
         * Recursively draw this node and its child nodes
         * 
         * @param res Resolution of the canvas
        */
        void draw(int res);

};

template <typename Item> 
class BinaryTree {
    private:
        TreeNode<Item>* root;
        int N; // Size (number of nodes)
    public:
        BinaryTree();
        ~BinaryTree();
        void cleanupSubtrees(TreeNode<Item>* node);

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
         * 
         * Looking for a particular object in the tree
         * @param obj Object to search for
         * 
         * @return true if obj is in the tree
         *         false otherwise
        */
        bool containsRec(Item obj);

        /**
         * Add an object to the tree if it doesn't
         * exist already.  Make sure we maintain the
         * "tree ordering invariant"
         * 
         * @param obj: Object I want to add
        */
        void add(Item obj);

        void inorder();

        /**
         * Draw the tree on a square canvas of a particular resolution
         * 
         * @param res Resolution of the canvas
        */
        void draw(int res);

        static BinaryTree<int> getExampleTree();
};

#endif