#include "tree.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {    
    BinaryTree<int> T = BinaryTree<int>();
    T.add(12);
    T.add(5);
    T.add(416);
    T.add(26);
    T.add(12);
    T.add(2);
    T.add(7);
    T.add(20);
    T.add(22);
    T.add(222);

    T.inorder();

    
    return 0;
}
